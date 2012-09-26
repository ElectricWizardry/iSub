//
//  SUSCoverArtDAO.h
//  iSub
//
//  Created by Benjamin Baron on 11/22/11.
//  Copyright (c) 2011 Ben Baron. All rights reserved.
//

#import "ISMSLoaderDelegate.h"
#import "ISMSLoaderManager.h"

@class FMDatabase, ISMSCoverArtLoader;
@interface SUSCoverArtDAO : NSObject <ISMSLoaderDelegate, ISMSLoaderManager>

@property (weak) NSObject<ISMSLoaderDelegate> *delegate;
@property (strong) ISMSCoverArtLoader *loader;

@property (copy) NSString *coverArtId;
@property BOOL isLarge;

- (UIImage *)coverArtImage;
- (UIImage *)defaultCoverArtImage;
@property (readonly) BOOL isCoverArtCached;

- (id)initWithDelegate:(NSObject<ISMSLoaderDelegate> *)theDelegate;
- (id)initWithDelegate:(NSObject<ISMSLoaderDelegate> *)delegate coverArtId:(NSString *)artId isLarge:(BOOL)large;

- (void)downloadArtIfNotExists;

@end
