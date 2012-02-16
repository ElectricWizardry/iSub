//
//  iPhoneStreamingPlayerViewController.h
//  iSub
//
//  Created by Ben Baron on 2/27/10.
//  Copyright 2010 Ben Baron. All rights reserved.
//


@class iSubAppDelegate, MusicSingleton, DatabaseSingleton, PlaylistSingleton, ViewObjectsSingleton, CoverArtImageView, PageControlViewController, MPVolumeView, AudioEngine, PlaylistSingleton, OBSlider, Song;

@interface iPhoneStreamingPlayerViewController : UIViewController
{
	IBOutlet UIButton *playButton;
	IBOutlet UIButton *nextButton;
	IBOutlet UIButton *prevButton;
	IBOutlet UIButton *eqButton;
	IBOutlet UIView *volumeSlider;
	MPVolumeView *volumeView;
	UISlider *jukeboxVolumeView;
	IBOutlet CoverArtImageView *coverArtImageView;
	IBOutlet UIImageView *reflectionView;
	IBOutlet UIButton *songInfoToggleButton;
    IBOutlet UIActivityIndicatorView *activityIndicator;
	
	UILabel *artistLabel;
	UILabel *albumLabel;
	UILabel *titleLabel;
	
	UILabel *artistTitleLabel;
	UILabel *albumTitleLabel;
	UILabel *songTitleLabel;
	
	iSubAppDelegate *appDelegate;
	MusicSingleton *musicControls;
	DatabaseSingleton *databaseControls;
	ViewObjectsSingleton *viewObjects;
	PlaylistSingleton *currentPlaylist;
	AudioEngine *audio;
	
	NSUInteger reflectionHeight;
	
	BOOL isFlipped;
	BOOL isExtraButtonsShowing;
	
	UIView *flipButtonView;
	
	PageControlViewController *pageControlViewController;
	
	uint64_t bookmarkBytePosition;
}

@property (retain) NSArray *listOfSongs;

@property (retain) IBOutlet UIView *extraButtons;
@property (retain) IBOutlet UIImageView *extraButtonsBackground;
@property (retain) IBOutlet UIButton *extraButtonsButton;

@property (retain) IBOutlet UIButton *currentAlbumButton;
@property (retain) IBOutlet UIButton *repeatButton;
@property (retain) IBOutlet UIButton *bookmarkButton;
@property (retain) IBOutlet UILabel *bookmarkCountLabel;
@property (retain) IBOutlet UIButton *shuffleButton;
@property (retain) IBOutlet OBSlider *progressSlider;
@property (retain) IBOutlet UILabel *progressLabel;
@property (retain) IBOutlet UIImageView *progressLabelBackground;
@property (retain) IBOutlet UILabel *elapsedTimeLabel;
@property (retain) IBOutlet UILabel *remainingTimeLabel;
@property (retain) UIView *downloadProgress;

@property (retain) NSTimer *updateTimer;
@property (retain) NSTimer *progressTimer;
@property (nonatomic) BOOL pauseSlider;
@property (nonatomic) BOOL hasMoved;
@property (nonatomic) float oldPosition;
@property (nonatomic) NSUInteger byteOffset;

@property (copy) Song *currentSong;

@property (retain) UITextField *bookmarkNameTextField;
@property (retain) NSArray *bookmarkEntry;
@property (nonatomic) NSInteger bookmarkIndex;
@property (nonatomic) int bookmarkPosition;

- (void)setPlayButtonImage;
- (void)setPauseButtonImage;
- (IBAction)songInfoToggle:(id)sender;
- (IBAction)playButtonPressed:(id)sender;
- (IBAction)prevButtonPressed:(id)sender;
- (IBAction)nextButtonPressed:(id)sender;
- (IBAction)currentAlbumPressed:(id)sender;

- (void)createSongTitle;
- (void)removeSongTitle;
- (void)setSongTitle;
- (IBAction)toggleExtraButtons:(id)sender;

- (IBAction)showEq:(id)sender;


- (IBAction)repeatButtonToggle:(id)sender;
- (IBAction)bookmarkButtonToggle:(id)sender;
- (IBAction)shuffleButtonToggle:(id)sender;
- (IBAction)touchedSlider:(id)sender;
- (IBAction)movingSlider:(id)sender;
- (IBAction)movedSlider:(id)sender;

- (IBAction)skipBack30:(id)sender;
- (IBAction)skipForward30:(id)sender;

- (void)updateDownloadProgress;
- (void)updateSlider;
- (void)updateShuffleIcon;


@end

