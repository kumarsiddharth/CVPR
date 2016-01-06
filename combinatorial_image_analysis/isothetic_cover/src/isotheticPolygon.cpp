#include "isothetic.hpp"


Point2i getTopLeftPoint(Mat &img)
{
	int nRows = img.rows;
	int nCols = img.cols;

	if(img.isCountinuous()){
		nCols *= nRows;
	}
}