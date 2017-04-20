/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSharingOptionView : UICollectionReusableView <PXUIAssetBadgeViewDelegate> {
    SEL  _action;
    BOOL  _enabled;
    BOOL  _selected;
    id  _target;
    PXUIAssetBadgeView * _toggleGlyphButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (getter=isSelected, nonatomic) BOOL selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isEnabled;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end