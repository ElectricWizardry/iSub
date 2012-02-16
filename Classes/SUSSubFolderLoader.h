//
//  SUSSubFolderLoader.h
//  iSub
//
//  Created by Benjamin Baron on 11/6/11.
//  Copyright (c) 2011 Ben Baron. All rights reserved.
//

#import "SUSLoader.h"

@class Artist, Album, Song;
@interface SUSSubFolderLoader : SUSLoader
{
    NSUInteger albumsCount;
    NSUInteger songsCount;
    NSUInteger folderLength;
}

@property (copy) NSString *myId;
@property (copy) Artist *myArtist;

@end
