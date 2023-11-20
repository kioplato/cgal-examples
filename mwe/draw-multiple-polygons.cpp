/**
 * Purpose: Draw a polygon using CGAL's draw function.
 */

#include <iostream>

#include <CGAL/Exact_predicates_exact_constructions_kernel.h>
#include <CGAL/Polygon_2.h>
#include <CGAL/Polygon_set_2.h>
#include <CGAL/draw_polygon_set_2.h>

typedef CGAL::Exact_predicates_exact_constructions_kernel Kernel;
typedef CGAL::Polygon_2<Kernel>                           Polygon_2;
typedef CGAL::Point_2<Kernel>                             Point;
typedef CGAL::Polygon_set_2<Kernel>                       Polygon_set_2;

using namespace std;

int main()
{
	// Create two polygons.
	Polygon_2 polygonA;
	polygonA.push_back(Point(0,0));
	polygonA.push_back(Point(4,0));
	polygonA.push_back(Point(4,4));
	polygonA.push_back(Point(2,2));
	polygonA.push_back(Point(0,4));

	Polygon_2 polygonB;
	polygonB.push_back(Point(10,10));
	polygonB.push_back(Point(14,10));
	polygonB.push_back(Point(14,14));
	polygonB.push_back(Point(12,12));
	polygonB.push_back(Point(10,14));

	Polygon_set_2 polygon_set;
	polygon_set.insert(polygonA);
	polygon_set.insert(polygonB);

	CGAL::draw(polygon_set);

	return EXIT_SUCCESS;
}
