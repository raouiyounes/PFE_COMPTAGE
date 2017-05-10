#include <stdio.h>
#include <iostream>
#include <fstream>
#include "opencv2/core/core.hpp"
#include "opencv2/features2d/features2d.hpp"
#include "opencv2/nonfree/features2d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/nonfree/nonfree.hpp"
#include <opencv2/imgproc/imgproc_c.h>
#include <eigen3/Eigen/Dense>
 #include <cv.h>
#include <highgui.h>
#include "Density.h"
#include "ClassifierSona.h"
using namespace Eigen;
using namespace cv;
using namespace std;
typedef vector<std::vector<double> > struct1;
using namespace sonasid;
// exemple de programme test
int main(){
Density *dst=new Density();
dst->numberof_annot=0;
dst->getXY();
for(int i=0;i<dst->anot_x_coor.size();i++)
cout<<"  "<<dst->anot_x_coor.at(i);
vector<float > F0;
F0=dst->computeF0();
float s=0.0;
//calcul de F0
for(int i=0;i<F0.size();i++)
s+=F0.at(i); 
vector<Mat>  db;
ClassifierSona  *classif=new ClassifierSona();
db=classif->loadDb();
return 0;
} 

