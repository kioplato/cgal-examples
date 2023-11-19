/**
 * Purpose: Compute the convex hull of a polygon.
 */

#include <iostream>

#include "CGAL/Exact_predicates_exact_constructions_kernel.h"
#include "CGAL/Polygon_2.h"
#include "CGAL/convex_hull_2.h"

typedef CGAL::Exact_predicates_exact_constructions_kernel Kernel;
typedef CGAL::Polygon_2<Kernel>                           Polygon_2;
typedef CGAL::Point_2<Kernel>                             Point;

using namespace std;

int main()
{
	Polygon_2 polygon;
	polygon.push_back(Point(0,0));
	polygon.push_back(Point(4,0));
	polygon.push_back(Point(4,4));
	polygon.push_back(Point(2,2));
	polygon.push_back(Point(0,4));

	cout << "Computing the convex hull of polygon:" << endl;
	for (const Point& point : polygon) cout << '\t' << point << endl;

	Polygon_2 convex_hull;
	convex_hull_2(polygon.begin(), polygon.end(), back_inserter(convex_hull));
	cout << "The convex hull is the polygon:" << endl;
	for (const Point& point : convex_hull) cout << '\t' << point << endl;

	return EXIT_SUCCESS;
}
