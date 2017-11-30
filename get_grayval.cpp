#include <opencv2/core/core.hpp>  
#include<opencv2/highgui/highgui.hpp> 
#include <iostream>
using namespace cv;
using namespace std;

int get_grayval(IplImage* I, int row, int col)  
{  
   IplImage* src = I;
   int width = src->width;//图片宽度
   int height = src->height;//图片高度
   int intensity;
   size_t cols = row * col;
   uchar* ptr = (uchar*)src->imageData+row*src->width;
   for(size_t i = 0; i < cols; i++){
		intensity=ptr[i];
   }
   return intensity;
}  
int main(int argc, char** argv)
{
	IplImage* src = cvLoadImage( "1.jpg", 0 );//导入图片
	int width = src->width;//图片宽度
	int height = src->height;//图片高度
	int rows, cols;
	int res;
	cout << "输入你要查询的像素的位置"<<endl;
	cout <<"行：";
	cin >> rows;
	cout <<"列：";
	cin >> cols;
	res = get_grayval(src, rows, cols);
	cout<<"查询位置的像素灰度为："<<res<<endl;
	return 0;  
}