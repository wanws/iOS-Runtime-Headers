/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAutoInstallOperation : NSObject <NSSecureCoding, SUAutoInstallOperationClientHandler> {
    int  _agreementStatus;
    BOOL  _canceled;
    SUManagerClient * _client;
    BOOL  _clientOwned;
    <SUAutoInstallOperationDelegate> * _delegate;
    BOOL  _expired;
    SUAutoInstallForecast * _forecast;
    NSUUID * _id;
}

@property (nonatomic) int agreementStatus;
@property (getter=isCanceled, nonatomic, readonly) BOOL canceled;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUAutoInstallOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpired, nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly, retain) SUAutoInstallForecast *forecast;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSUUID *id;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (id)_initWithClient:(id)arg1 clientOwned:(BOOL)arg2 id:(id)arg3 forecast:(id)arg4 agreementStatus:(int)arg5 cancelled:(BOOL)arg6 expired:(BOOL)arg7;
- (BOOL)_isDateExpired:(id)arg1;
- (BOOL)_isEffectivelyScheduled;
- (BOOL)_isValidForScheduling;
- (BOOL)_isValidTillDate:(id)arg1;
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpire;
- (void)_noteAutoInstallOperationIsReadyToInstall:(id /* block */)arg1;
- (void)_noteAutoInstallOperationWasCancelled;
- (int)agreementStatus;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forecast;
- (id)id;
- (id)init;
- (id)initWithAutoInstallOperationModel:(id)arg1 client:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCanceled;
- (BOOL)isExpired;
- (void)setAgreementStatus:(int)arg1;
- (void)setDelegate:(id)arg1;
- (id)uniqueIdentifier;

@end