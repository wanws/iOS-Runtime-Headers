/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
 */

@interface MSSongsTableViewController : MSSectionedTableViewController {
    BOOL _shouldShowAlbumAndArtistSubtitle;
    BOOL _shouldShowShuffleAction;
}

@property BOOL shouldShowAlbumAndArtistSubtitle;
@property BOOL shouldShowShuffleAction;

- (unsigned int)countOfActions;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;
- (void)setShouldShowAlbumAndArtistSubtitle:(BOOL)arg1;
- (void)setShouldShowShuffleAction:(BOOL)arg1;
- (BOOL)shouldShowAlbumAndArtistSubtitle;
- (BOOL)shouldShowShuffleAction;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end