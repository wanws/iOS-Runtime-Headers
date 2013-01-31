/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFProtectedSQLiteConnection;

@interface _MFLibrarySQLiteConnectionWrapper : NSObject  {
    MFProtectedSQLiteConnection *_connection;
    BOOL _writer;
    unsigned int _refcount;
}

@property(readonly) MFProtectedSQLiteConnection * connection;
@property(readonly) BOOL writer;
@property(readonly) unsigned int refcount;

+ (id)wrapperWithConnection:(id)arg1 forWriting:(BOOL)arg2;

- (void)dealloc;
- (BOOL)writer;
- (unsigned int)refcount;
- (id)initWithConnection:(id)arg1 forWriting:(BOOL)arg2;
- (unsigned int)decrementRefcount;
- (unsigned int)incrementRefcount;
- (id)connection;

@end