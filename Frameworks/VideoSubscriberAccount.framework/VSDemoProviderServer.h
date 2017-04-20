/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSDemoProviderServer : NSObject <VSWebServerConnectionDelegate, VSWebServerDelegate> {
    NSUUID * _cacheBuster;
    NSURL * _cookieServerURL;
    NSString * _providerLogoResourceName;
    NSString * _providerName;
    VSWebServer * _server;
    NSString * _templateName;
}

@property (nonatomic, readonly, copy) NSURL *bootURL;
@property (nonatomic, copy) NSUUID *cacheBuster;
@property (nonatomic, copy) NSURL *cookieServerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *providerLogoResourceName;
@property (nonatomic, copy) NSString *providerName;
@property (nonatomic, retain) VSWebServer *server;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *templateName;

- (void).cxx_destruct;
- (id)_bootPath;
- (id)_helperPath;
- (id)_logoPath;
- (id)_responseToRequest:(id)arg1 usingResourceOfType:(id)arg2 withName:(id)arg3;
- (id)_webPath;
- (id)bootURL;
- (id)cacheBuster;
- (id)cookieServerURL;
- (id)init;
- (id)providerLogoResourceName;
- (id)providerName;
- (id)server;
- (void)setCacheBuster:(id)arg1;
- (void)setCookieServerURL:(id)arg1;
- (void)setProviderLogoResourceName:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setTemplateName:(id)arg1;
- (id)templateName;
- (void)webServer:(id)arg1 didOpenConnection:(id)arg2;
- (void)webServer:(id)arg1 didReceiveError:(id)arg2;
- (void)webServerConnection:(id)arg1 didReceiveRequest:(id)arg2;

@end