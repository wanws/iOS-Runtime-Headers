/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSImageHistogramSpecification : MPSUnaryImageKernel {
    bool  encodeTransform;
    bool  histogramAlpha;
    unsigned int  histogramEntries;
    void maxPixelValue;
    void minPixelValue;
    bool  optimized256BinsUseCase;
    <MTLBuffer> * specificationBuffer;
}

@property (nonatomic, readonly) struct { unsigned int x1; BOOL x2; } histogramInfo;

+ (const struct MPSLibraryInfo { int x1; unsigned int x2; char *x3; struct MPSKernelInfo {} *x4; struct MPSKernelInfo {} *x5; struct MPSKernelInfo {} *x6; struct MPSKernelInfo {} *x7; struct MPSKernelInfo {} *x8; struct MPSKernelInfo {} *x9; struct MPSKernelInfo {} *x10; struct MPSKernelInfo {} *x11; struct MPSKernelInfo {} *x12; struct MPSKernelInfo {} *x13; struct MPSKernelInfo {} *x14; }*)libraryInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeTransformToCommandBuffer:(id)arg1 sourceTexture:(id)arg2 sourceHistogram:(id)arg3 sourceHistogramOffset:(unsigned int)arg4 desiredHistogram:(id)arg5 desiredHistogramOffset:(unsigned int)arg6;
- (struct { unsigned int x1; BOOL x2; })histogramInfo;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 histogramInfo:(const struct { unsigned int x1; BOOL x2; }*)arg2;

@end