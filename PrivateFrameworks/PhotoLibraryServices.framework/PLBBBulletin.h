/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDate, NSDictionary, NSMutableSet, NSString;

@interface PLBBBulletin : NSObject {
    NSString *_albumTitle;
    NSString *_albumUUID;
    BOOL _allMultipleAssetIsMine;
    int _assetCount;
    NSMutableSet *_assetUUIDs;
    long long _bulletinType;
    int _commentCount;
    NSDate *_commentDate;
    BOOL _commentIsCaption;
    NSString *_commentText;
    BOOL _containsBatchFirstKnownAsset;
    NSDate *_date;
    NSDate *_expirationDate;
    NSString *_firstCommentGUID;
    BOOL _forMultipleAsset;
    int _invitationState;
    BOOL _isMixedType;
    NSMutableSet *_lowResThumbAssetUUIDs;
    BOOL _mainAssetIsMine;
    BOOL _mainAssetIsVideo;
    NSString *_mainAssetUUID;
    NSDate *_originalDate;
    unsigned int _originalRecordID;
    NSString *_photosBatchID;
    NSMutableSet *_placeholderAssetUUIDs;
    unsigned int _recordID;
    unsigned int _replacedBulletinRecordID;
    NSString *_senderEmailAddress;
    NSString *_senderName;
    NSMutableSet *_senderNames;
    BOOL _suppressAlert;
}

@property(readonly) NSString * albumUUID;
@property(readonly) BOOL allAssetsAreFullResolution;
@property(readonly) long long bulletinType;
@property(readonly) BOOL canMergeWithPersistedBulletins;
@property(readonly) double completionPercentage;
@property(readonly) NSDate * date;
@property(readonly) NSString * destinationURLString;
@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) NSDate * expirationDate;
@property(readonly) BOOL hasThumbnail;
@property(readonly) NSString * mainAssetUUID;
@property(readonly) NSString * message;
@property(copy) NSDate * originalDate;
@property unsigned int originalRecordID;
@property unsigned int recordID;
@property unsigned int replacedBulletinRecordID;
@property(readonly) NSString * senderEmailAddress;
@property BOOL suppressAlert;
@property(readonly) NSArray * suppressionContexts;
@property(readonly) BOOL thumbnailAssetIsPlaceholder;
@property(readonly) NSString * title;

- (id)_initWithCommentsCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12;
- (id)_initWithLikesCount:(int)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(BOOL)arg6 mainAssetIsVideo:(BOOL)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12 senderNames:(id)arg13 forMultipleAsset:(BOOL)arg14 allMultipleAssetIsMine:(BOOL)arg15 isMixedType:(BOOL)arg16;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletin:(id)arg2;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletinDictionary:(id)arg2;
- (id)_initWithType:(long long)arg1;
- (id)_localizedCountFormatter;
- (id)albumUUID;
- (BOOL)allAssetsAreFullResolution;
- (BOOL)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(int)arg2 fromOldKind:(int)arg3;
- (id)bulletinByMergingWithBulletin:(id)arg1;
- (id)bulletinByMergingWithBulletinDictionary:(id)arg1;
- (long long)bulletinType;
- (BOOL)canMergeWithPersistedBulletins;
- (double)completionPercentage;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)destinationURLString;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (BOOL)hasThumbnail;
- (id)init;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned int)arg2 toAlbum:(id)arg3;
- (id)initWithCommentAdded:(id)arg1;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)initWithLikeAdded:(id)arg1;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (BOOL)isCommentPiggyBackedOnPhotosAddedBulletin;
- (id)mainAssetUUID;
- (id)message;
- (id)originalDate;
- (unsigned int)originalRecordID;
- (unsigned int)recordID;
- (unsigned int)replacedBulletinRecordID;
- (id)senderEmailAddress;
- (void)setOriginalDate:(id)arg1;
- (void)setOriginalRecordID:(unsigned int)arg1;
- (void)setRecordID:(unsigned int)arg1;
- (void)setReplacedBulletinRecordID:(unsigned int)arg1;
- (void)setSuppressAlert:(BOOL)arg1;
- (BOOL)suppressAlert;
- (id)suppressionContexts;
- (BOOL)thumbnailAssetIsPlaceholder;
- (id)title;

@end
