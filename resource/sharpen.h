#ifndef SHARPEN_H
#define SHARPEN_H

#include "convolution.h"
#include "smooth.h"
#include "mathematic.h"
#include "Segment.h"
#define SHARPEN_LAPLACE 0
#define SHARPEN_SOBEL   1
#define SHARPEN_ROBERT  2

void LaplaceSharpen(double *src,double *dst,int width,int height,double c);
void UnsharpMasking(double *src,double *dst,int width,int height,int smooth_type,int smooth_mask_width,int smooth_mask_height,double gaussian_deta,double k);
void SobelSharpen(double *src,double *dst,int width,int height,double c);
void RobertSharpen(double *src,double *dst,int width,int height,double c);
#endif