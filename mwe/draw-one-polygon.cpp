/**
 * Purpose: Draw a polygon using CGAL's draw function.
 */

#include <iostream>

#include "CGAL/Exact_predicates_exact_constructions_kernel.h"
#include "CGAL/Polygon_2.h"
#include "CGAL/draw_polygon_2.h"

typedef CGAL::Exact_predicates_exact_constructions_kernel Kernel;
typedef CGAL::Polygon_2<Kernel>                           Polygon_2;
typedef CGAL::Point_2<Kernel>                             Point;

using namespace std;

int main()
{
	// Create a polygon and put some points in it.
	Polygon_2 polygon;
	polygon.push_back(Point(0,0));
	polygon.push_back(Point(4,0));
	polygon.push_back(Point(4,4));
	polygon.push_back(Point(2,2));
	polygon.push_back(Point(0,4));

	CGAL::draw(polygon);

	return EXIT_SUCCESS;
}
