#include "Canvas.h"
#include <cstring>
#include <cstdio>
#include <cmath>

Canvas::Canvas(int width, int height)
{
	this->height = height;
	this->width = width;
	this->mat = new char* [height];
	for (int i = 0; i < height; i++)
	{
		this->mat[i] = new char[width + 1];
		memset(this->mat[i], 32, width);
		this->mat[i][width] = '\0';
	}
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	if (y + ray<0 || y - ray>this->height || x + ray<0 || x - ray>this->width)
		return;
	int i, j, v;
	for (i = x - ray; i <= x + ray; i++)
		for (j = y - ray; j <= y + ray; j++)
		{
			v = (i - x) * (i - x) + (j - y) * (j - y);
			if ((v >= ray * (ray - 1)) && (v <= ray * (ray + 1)))
				this->mat[j][i] = ch;
		}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	if (y + ray<0 || y - ray>this->height || x + ray<0 || x - ray>this->width)
		return;
	int i, j, v;
	for (i = x - ray; i <= x + ray; i++)
		for (j = y - ray; j <= y + ray; j++)
		{
			v = (i - x) * (i - x) + (j - y) * (j - y);
			if (v < ray * (ray - 1))
				this->mat[j][i] = ch;
		}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	if (top<0 || bottom>this->height || left > this->width || right < 0)
		return;
	int i;
	for (i = left; i <= right; i++)
		this->mat[top][i] = this->mat[bottom][i] = ch;
	for (i = bottom; i <= top; i++)
		this->mat[i][left] = this->mat[i][right] = ch;

}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	if (top<0 || bottom>this->height || left > this->width || right < 0)
		return;
	int i, j;
	for (i = left + 1; i < right; i++)
		for (j = bottom + 1; j < top; j++)
			mat[j][i] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	if (x > this->width || x<0 || y>this->height || y < 0)
		return;
	mat[y][x] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int dx, sx, dy, sy;
	dx = abs(x2 - x1);
	sx = x1 < x2 ? 1 : -1;
	dy = -abs(y2 - y1);
	sy = y1 < y2 ? 1 : -1;
	int	e2, error = dx + dy;

	while (true)
	{
		this->mat[y1][x1] = ch;
		if (x1 == x2 && y1 == y2) break;
		e2 = 2 * error;
		if (e2 >= dy)
		{
			if (x1 == x2) break;
			error = error + dy;
			x1 = x1 + sx;
		}
		if (e2 <= dx)
		{
			if (y1 == y2) break;
			error = error + dx;
			y1 = y1 + sy;
		}
	}
}

void Canvas::Print()
{
	int i, j;
	for (i = 0; i < this->height; i++)
	{
		for (j = 0; j < this->width; j++)
			printf("%c", this->mat[i][j]);
		printf("\n");
	}
}

void Canvas::Clear()
{
	int i, j;
	for (i = 0; i < this->height; i++)
		for (j = 0; j < this->width; j++)
			mat[i][j] = ' ';
}

