/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBItemCollection : NSObject <NSSecureCoding, NSXPCListenerDelegate> {
    NSDate * _creationDate;
    NSUUID * _itemQueue_UUID;
    NSXPCListener * _itemQueue_dataConsumersListener;
    BOOL  _itemQueue_deviceLockedPasteboard;
    BOOL  _itemQueue_isDataProvider;
    NSArray * _itemQueue_items;
    NSDictionary * _itemQueue_metadata;
    NSString * _itemQueue_originatorBundleID;
    NSString * _itemQueue_originatorTeamID;
    NSDictionary * _itemQueue_privateMetadata;
    NSXPCConnection * _itemQueue_remoteDataProviderConnection;
    NSXPCListenerEndpoint * _itemQueue_remoteDataProviderEndpoint;
    int  _itemQueue_remotePasteboardState;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic) int changeCount;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, readonly) NSXPCListenerEndpoint *dataConsumersEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDeviceLockedPasteboard, nonatomic) BOOL deviceLockedPasteboard;
@property (nonatomic, retain) NSDate *expirationDate;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) BOOL isDataProvider;
@property (nonatomic, readonly) BOOL isGeneralPasteboard;
@property (nonatomic) BOOL isRemote;
@property (nonatomic, retain) NSUUID *itemQueue_UUID;
@property (nonatomic, retain) NSXPCListener *itemQueue_dataConsumersListener;
@property (getter=itemQueue_isDeviceLockedPasteboard, nonatomic) BOOL itemQueue_deviceLockedPasteboard;
@property (nonatomic) BOOL itemQueue_isDataProvider;
@property (nonatomic, copy) NSArray *itemQueue_items;
@property (nonatomic, copy) NSDictionary *itemQueue_metadata;
@property (nonatomic, copy) NSString *itemQueue_originatorBundleID;
@property (nonatomic, copy) NSString *itemQueue_originatorTeamID;
@property (nonatomic, retain) NSDictionary *itemQueue_privateMetadata;
@property (nonatomic, retain) NSXPCConnection *itemQueue_remoteDataProviderConnection;
@property (nonatomic, retain) NSXPCListenerEndpoint *itemQueue_remoteDataProviderEndpoint;
@property (nonatomic) int itemQueue_remotePasteboardState;
@property (nonatomic, readonly, copy) NSArray *items;
@property (getter=isLocalOnly, nonatomic) BOOL localOnly;
@property (nonatomic, copy) NSDictionary *metadata;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *originatorBundleID;
@property (nonatomic, readonly, copy) NSString *originatorTeamID;
@property (nonatomic, readonly, copy) NSString *persistenceName;
@property (getter=isPersistent, nonatomic) BOOL persistent;
@property (nonatomic, retain) NSDictionary *privateMetadata;
@property (getter=isRemoteDataLoaded, nonatomic, readonly) BOOL remoteDataLoaded;
@property (getter=isRemoteMetadataLoaded, nonatomic, readonly) BOOL remoteMetadataLoaded;
@property (readonly) Class superclass;
@property (getter=isSystemPasteboard, nonatomic, readonly) BOOL systemPasteboard;

+ (id)allowedClassesForSecureCoding;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_remoteDataProviderConnection;
- (void)_setMetadataValue:(id)arg1 forKey:(id)arg2;
- (id)availableRepresentationTypes;
- (BOOL)canInstantiateObjectOfClass:(Class)arg1;
- (int)changeCount;
- (id)copyWithItems:(id)arg1;
- (id)creationDate;
- (id)dataConsumersEndpoint;
- (id)dataConsumersListener;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)establishConnectionToDataProviderCompletionBlock:(id /* block */)arg1;
- (id)expirationDate;
- (BOOL)hasItemWithRepresentationConformingToType:(id)arg1;
- (BOOL)hasItemWithRepresentationOfType:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (BOOL)isDataProvider;
- (BOOL)isDeviceLockedPasteboard;
- (BOOL)isGeneralPasteboard;
- (BOOL)isLocalOnly;
- (BOOL)isPersistent;
- (BOOL)isRemote;
- (BOOL)isRemoteDataLoaded;
- (BOOL)isRemoteMetadataLoaded;
- (BOOL)isSystemPasteboard;
- (id)itemQueue_UUID;
- (id)itemQueue_dataConsumersListener;
- (BOOL)itemQueue_isDataProvider;
- (BOOL)itemQueue_isDeviceLockedPasteboard;
- (id)itemQueue_items;
- (id)itemQueue_metadata;
- (id)itemQueue_originatorBundleID;
- (id)itemQueue_originatorTeamID;
- (id)itemQueue_privateMetadata;
- (id)itemQueue_remoteDataProviderConnection;
- (id)itemQueue_remoteDataProviderEndpoint;
- (int)itemQueue_remotePasteboardState;
- (id)items;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)metadata;
- (id)name;
- (id)originatorBundleID;
- (id)originatorTeamID;
- (id)persistenceName;
- (id)privateMetadata;
- (void)setChangeCount:(int)arg1;
- (void)setDataProviderEndpoint:(id)arg1;
- (void)setDeviceLockedPasteboard:(BOOL)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setIsRemote:(BOOL)arg1;
- (void)setItemQueue_UUID:(id)arg1;
- (void)setItemQueue_dataConsumersListener:(id)arg1;
- (void)setItemQueue_deviceLockedPasteboard:(BOOL)arg1;
- (void)setItemQueue_isDataProvider:(BOOL)arg1;
- (void)setItemQueue_items:(id)arg1;
- (void)setItemQueue_metadata:(id)arg1;
- (void)setItemQueue_originatorBundleID:(id)arg1;
- (void)setItemQueue_originatorTeamID:(id)arg1;
- (void)setItemQueue_privateMetadata:(id)arg1;
- (void)setItemQueue_remoteDataProviderConnection:(id)arg1;
- (void)setItemQueue_remoteDataProviderEndpoint:(id)arg1;
- (void)setItemQueue_remotePasteboardState:(int)arg1;
- (void)setItems:(id)arg1;
- (void)setLocalOnly:(BOOL)arg1;
- (void)setMetadata:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOriginatorBundleID:(id)arg1;
- (void)setOriginatorTeamID:(id)arg1;
- (void)setPersistent:(BOOL)arg1;
- (void)setPrivateMetadata:(id)arg1;
- (void)setRemoteDataLoaded;
- (void)setRemoteMetadataLoaded;
- (void)setUUID:(id)arg1;
- (void)setUsesServerConnectionToLoadData;
- (void)shutdown;

@end