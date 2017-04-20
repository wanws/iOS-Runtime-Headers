/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction {
    MDLMaterialProperty * _anisotropic;
    MDLMaterialProperty * _anisotropicRotation;
    MDLMaterialProperty * _clearcoat;
    MDLMaterialProperty * _clearcoatGloss;
    MDLMaterialProperty * _metallic;
    struct PhysicallyPlausibleDistribution { int (**x1)(); struct BSDFMaterialValues { struct CGColor {} *x_2_1_1; float x_2_1_2; struct CGColor {} *x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; } x2; } * _physicalBSDF;
    MDLMaterialProperty * _roughness;
    MDLMaterialProperty * _sheen;
    MDLMaterialProperty * _sheenTint;
    MDLMaterialProperty * _specularAmount;
    MDLMaterialProperty * _specularTint;
    MDLMaterialProperty * _subsurface;
}

@property (nonatomic, readonly, retain) MDLMaterialProperty *anisotropic;
@property (nonatomic, readonly, retain) MDLMaterialProperty *anisotropicRotation;
@property (nonatomic, readonly, retain) MDLMaterialProperty *clearcoat;
@property (nonatomic, readonly, retain) MDLMaterialProperty *clearcoatGloss;
@property (nonatomic, readonly, retain) MDLMaterialProperty *metallic;
@property (nonatomic, readonly, retain) MDLMaterialProperty *roughness;
@property (nonatomic, readonly, retain) MDLMaterialProperty *sheen;
@property (nonatomic, readonly, retain) MDLMaterialProperty *sheenTint;
@property (nonatomic, readonly, retain) MDLMaterialProperty *specularAmount;
@property (nonatomic, readonly, retain) MDLMaterialProperty *specularTint;
@property (nonatomic, readonly, retain) MDLMaterialProperty *subsurface;
@property (nonatomic, readonly) int version;

- (void).cxx_destruct;
- (id)anisotropic;
- (id)anisotropicRotation;
- (id)clearcoat;
- (id)clearcoatGloss;
- (id)init;
- (id)metallic;
- (id)roughness;
- (id)sheen;
- (id)sheenTint;
- (id)specularAmount;
- (id)specularTint;
- (id)subsurface;
- (int)version;

@end