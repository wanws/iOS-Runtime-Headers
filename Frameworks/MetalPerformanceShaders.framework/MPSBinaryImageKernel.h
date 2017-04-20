/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
 */

@interface MPSBinaryImageKernel : MPSKernel {
    int  _checkFlags;
    struct { 
        struct { 
            unsigned int x; 
            unsigned int y; 
            unsigned int z; 
        } origin; 
        struct { 
            unsigned int width; 
            unsigned int height; 
            unsigned int depth; 
        } size; 
    }  _clipRect;
    int (* _encode;
    void * _encodeData;
    const struct { unsigned int x1; unsigned int x2; unsigned int x3; } * _preferredTileSize;
    unsigned int  _primaryEdgeMode;
    struct { 
        int x; 
        int y; 
        int z; 
    }  _primaryOffset;
    unsigned int  _secondaryEdgeMode;
    struct { 
        int x; 
        int y; 
        int z; 
    }  _secondaryOffset;
}

@property (nonatomic) struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; } clipRect;
@property (nonatomic) unsigned int primaryEdgeMode;
@property (nonatomic) struct { int x1; int x2; int x3; } primaryOffset;
@property (nonatomic) unsigned int secondaryEdgeMode;
@property (nonatomic) struct { int x1; int x2; int x3; } secondaryOffset;

- (struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })clipRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1 device:(id)arg2;
- (id)debugDescription;
- (BOOL)encodeToCommandBuffer:(id)arg1 inPlacePrimaryTexture:(id*)arg2 secondaryTexture:(id)arg3 fallbackCopyAllocator:(id /* block */)arg4;
- (BOOL)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 inPlaceSecondaryTexture:(id*)arg3 fallbackCopyAllocator:(id /* block */)arg4;
- (void)encodeToCommandBuffer:(id)arg1 primaryTexture:(id)arg2 secondaryTexture:(id)arg3 destinationTexture:(id)arg4;
- (id)init;
- (id)initWithDevice:(id)arg1;
- (unsigned int)primaryEdgeMode;
- (struct { int x1; int x2; int x3; })primaryOffset;
- (struct MPSRegion { struct MPSOrigin { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct MPSSize { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })primarySourceRegionForDestinationSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (unsigned int)secondaryEdgeMode;
- (struct { int x1; int x2; int x3; })secondaryOffset;
- (struct MPSRegion { struct MPSOrigin { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct MPSSize { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })secondarySourceRegionForDestinationSize:(struct { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)setClipRect:(struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; } x1; struct { unsigned int x_2_1_1; unsigned int x_2_1_2; unsigned int x_2_1_3; } x2; })arg1;
- (void)setPrimaryEdgeMode:(unsigned int)arg1;
- (void)setPrimaryOffset:(struct { int x1; int x2; int x3; })arg1;
- (void)setSecondaryEdgeMode:(unsigned int)arg1;
- (void)setSecondaryOffset:(struct { int x1; int x2; int x3; })arg1;

@end