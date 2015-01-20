/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@class ATService, NSString, NSXPCConnection;

@interface ATServiceProxyConnection : NSObject <ATServiceProxyConnection, ATServiceObserver> {
    NSXPCConnection *_connection;
    ATService *_service;
}

@property(retain) NSXPCConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property ATService * service;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectWithCompletion:(id)arg1;
- (id)connection;
- (void)fetchMessageLinksWithCompletion:(id)arg1;
- (id)initWithService:(id)arg1 connection:(id)arg2;
- (void)service:(id)arg1 willOpenMessageLink:(id)arg2;
- (id)service;
- (void)setConnection:(id)arg1;
- (void)setService:(id)arg1;

@end