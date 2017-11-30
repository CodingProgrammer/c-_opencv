#include <opencv2/core/core.hpp>  
#include<opencv2/highgui/highgui.hpp> 
#include <iostream>
using namespace cv;
using namespace std;

int get_grayval(IplImage* I, int row, int col)  
{  
   IplImage* src = I;
   int width = src->width;//ͼƬ���
   int height = src->height;//ͼƬ�߶�
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
	IplImage* src = cvLoadImage( "1.jpg", 0 );//����ͼƬ
	int width = src->width;//ͼƬ���
	int height = src->height;//ͼƬ�߶�
	int rows, cols;
	int res;
	cout << "������Ҫ��ѯ�����ص�λ��"<<endl;
	cout <<"�У�";
	cin >> rows;
	cout <<"�У�";
	cin >> cols;
	res = get_grayval(src, rows, cols);
	cout<<"��ѯλ�õ����ػҶ�Ϊ��"<<res<<endl;
	return 0;  
}