//
//  FolderDropdownControl.h
//  iSub
//
//  Created by Ben Baron on 3/19/11.
//  Copyright 2011 Ben Baron. All rights reserved.
//

#import "FolderDropdownDelegate.h"

@interface FolderDropdownControl : UIView <NSXMLParserDelegate>
{
	CALayer *arrowImage;
	
	float sizeIncrease;
	
	NSDictionary *folders;
	NSMutableDictionary *updatedfolders;
	NSNumber *selectedFolderId;
	
	UILabel *selectedFolderLabel;
	
	NSMutableArray *labels;
	
	BOOL isOpen;
	
	// Colors
	UIColor *borderColor;
	UIColor *textColor;
	UIColor *lightColor;
	UIColor *darkColor;
	
	id<FolderDropdownDelegate> delegate;
	
	NSMutableData *receivedData;
	NSURLConnection *connection;
}

@property (retain) NSDictionary *folders;
@property BOOL isOpen;

@property (retain) NSNumber *selectedFolderId;

// Colors
@property (retain) UIColor *borderColor;
@property (retain) UIColor *textColor;
@property (retain) UIColor *lightColor;
@property (retain) UIColor *darkColor;

@property (assign) id<FolderDropdownDelegate> delegate;

- (void)selectFolderWithId:(NSNumber *)folderId;
- (void)updateFolders;
- (void)closeDropdown;
- (void)closeDropdownFast;

@end
