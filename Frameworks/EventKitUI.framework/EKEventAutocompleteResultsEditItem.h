/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventAutocompleteResultsEditItem : EKCalendarItemEditItem {
    NSArray * _results;
    BOOL  _suggestionApplied;
}

@property (nonatomic) <EKEventAutocompleteResultsEditItemDelegate> *delegate;
@property (nonatomic, readonly) BOOL hasSuggestedLocationResult;
@property (nonatomic, retain) NSArray *results;

+ (id)_backgroundColor;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2;
- (BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned int)arg2;
- (BOOL)hasSuggestedLocationResult;
- (unsigned int)numberOfSubitems;
- (id)results;
- (void)setResults:(id)arg1;
- (BOOL)shouldAppearWithVisibility:(int)arg1;

@end