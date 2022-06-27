#include "polyscope/polyscope.h"
#include "polyscope/surface_mesh.h"
#include <igl/readOBJ.h>
#include <iostream>

int main() {
  std::cout << "Hello Polyscope!" << std::endl;

  polyscope::init();

  // Read the mesh
  Eigen::MatrixXd meshV;
  Eigen::MatrixXi meshF;
  igl::readOBJ("./resources/bunny.obj", meshV, meshF);

  // Register the mesh with Polyscope
  polyscope::registerSurfaceMesh("input mesh", meshV, meshF);

  // Add a slice plane
  polyscope::SlicePlane *psPlane = polyscope::addSceneSlicePlane();
  psPlane->setDrawPlane(true); // render the semi-transparent gridded plane
  psPlane->setDrawWidget(true);

  // Show the GUI
  polyscope::show();

  return 0;
}