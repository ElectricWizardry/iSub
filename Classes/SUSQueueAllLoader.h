//
//  QueueAll.h
//  iSub
//
//  Created by Ben Baron on 1/16/11.
//  Copyright 2011 Ben Baron. All rights reserved.
//
#import "SUSLoader.h"

@class iSubAppDelegate, MusicSingleton, DatabaseSingleton, ViewObjectsSingleton, Artist;

@interface SUSQueueAllLoader : SUSLoader 
{
	iSubAppDelegate *appDelegate;
	MusicSingleton *musicControls;
	DatabaseSingleton *databaseControls;
	ViewObjectsSingleton *viewObjects;

	BOOL isQueue;
	BOOL isShuffleButton;
	BOOL doShowPlayer;
	
	NSString *currentPlaylist;
	NSString *shufflePlaylist;
		
	Artist *myArtist;
	
	NSMutableArray *folderIds;
}

@property (retain) NSString *currentPlaylist;
@property (retain) NSString *shufflePlaylist;

@property (retain) Artist *myArtist;

@property (retain) NSMutableArray *folderIds;

- (void)loadData:(NSString *)folderId artist:(Artist *)theArtist;// isQueue:(BOOL)queue;

- (void)queueData:(NSString *)folderId artist:(Artist *)theArtist;
- (void)cacheData:(NSString *)folderId artist:(Artist *)theArtist;
- (void)playAllData:(NSString *)folderId artist:(Artist *)theArtist;
- (void)shuffleData:(NSString *)folderId artist:(Artist *)theArtist;

@end
