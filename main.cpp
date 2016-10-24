#include <visualizer.h>

int main(int argc, char *argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DEPTH | GLUT_SINGLE | GLUT_RGBA);
  glutInitWindowPosition(100,100);
  glutInitWindowSize(1000, 1000);
  glutCreateWindow("boost::geometry::index::rtree GLUT test");

  glutDisplayFunc(render_scene);
  glutReshapeFunc(resize);
  glutMouseFunc(mouse);
  glutKeyboardFunc(keyboard);

  glutMainLoop();

  return 0;
}





//#include <boost/geometry.hpp>
//#include <boost/geometry/index/rtree.hpp>

//#include <boost/geometry/geometries/linestring.hpp>
//#include <boost/geometry/geometries/segment.hpp>
//#include <boost/geometry/geometries/ring.hpp>
//#include <boost/geometry/geometries/polygon.hpp>
//#include <boost/geometry/geometries/multi_polygon.hpp>

//#include <boost/geometry/index/detail/rtree/utilities/gl_draw.hpp>
//#include <boost/geometry/index/detail/rtree/utilities/print.hpp>
//#include <boost/geometry/index/detail/rtree/utilities/are_boxes_ok.hpp>
//#include <boost/geometry/index/detail/rtree/utilities/are_levels_ok.hpp>
//#include <boost/geometry/index/detail/rtree/utilities/statistics.hpp>
//#include <boost/geometry/index/rtree.hpp>
//#include <boost/geometry.hpp>
//#include <boost/geometry/geometries/point.hpp>
//#include <boost/geometry/geometries/box.hpp>
//#include <boost/geometry/index/detail/rtree/utilities/gl_draw.hpp>
//#include <boost/geometry/index/detail/rtree/utilities/print.hpp>

//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <iterator>
//#include <cstdlib>

//#include <QDebug>
//#include <QElapsedTimer>

//namespace bg = boost::geometry;
//namespace bgi = bg::index;
////using  point  = bg::model::point<std::size_t, 2, bg::cs::cartesian>;
////using  pointI = std::pair<point, std::size_t>;
//typedef bg::model::point<std::size_t, 2, bg::cs::cartesian> point;
//typedef std::pair<point, std::size_t> pointI;

//pointI mp(int x, int y, size_t v) {
//    return std::make_pair(point(x,y), v);
//}

//int main(int argc, char **argv)
//{
//  std::srand(time(0));
//  std::vector<point> contourCenters;
//  std::vector<pointI> cloud;

//  QElapsedTimer tmr;
//  tmr.start();
//  for (int i = 0; i < 2000000; ++i)
//    contourCenters.push_back(point((std::rand() % 1000000) * 100, (std::rand() % 1000000) * 100));

//  qDebug() << "add points: " << tmr.elapsed() << "ms";

//  size_t id_gen = 0;
//  std::transform(contourCenters.begin(), contourCenters.end(),
//                 std::back_inserter(cloud),
//                 [&](point const& p) { return std::make_pair(p, id_gen++); } );

////  for (pointI& pi : cloud)
////    qDebug() << "Contour Centers: (" << bg::get<0>(pi.first) << "," << bg::get<1>(pi.first) << ")" << " Id: " << pi.second;

//  tmr.restart();
//  bgi::rtree<pointI, bgi::quadratic<16> > rtree(cloud);
//  qDebug() << "build tree: " << tmr.elapsed() << "ms";

////  for (auto pi : rtree)
////    qDebug() << "R-Tree: (" << bg::get<0>(pi.first) << "," << bg::get<1>(pi.first) << ")" << " Id: " << pi.second;

//  std::vector<pointI> returned_values;
//  boost::geometry::model::box<point> box_region(point(200000, 200000), point(500000, 500000));
//  tmr.restart();
//  rtree.query(bgi::intersects(box_region), std::back_inserter(returned_values));

//  qDebug() << "query: " << tmr.nsecsElapsed() << "ns";
//  qDebug() << "nof points found: " << returned_values.size();

////  for (auto pi : returned_values)
////    qDebug() << "Query: (" << bg::get<0>(pi.first) << "," << bg::get<1>(pi.first) << ")" << " Id: " << pi.second;
//}
