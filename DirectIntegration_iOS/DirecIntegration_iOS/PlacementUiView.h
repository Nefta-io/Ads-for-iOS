//
//  PlacementUiViewController.h
//  TestbedIOS
//
//  Created by Tomaz Treven on 18/09/2023.
//

#import <UIKit/UIKit.h>
#import <NeftaPlugin_iOS/NeftaPlugin_iOS.h>

@interface PlacementUiView : UIView
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *availableBidLabel;
@property (weak, nonatomic) IBOutlet UIButton *bidButton;
@property (weak, nonatomic) IBOutlet UIButton *loadButton;
@property (weak, nonatomic) IBOutlet UILabel *bufferedBidLabel;
@property (weak, nonatomic) IBOutlet UIButton *showButton;
@property (weak, nonatomic) IBOutlet UILabel *renderedBidLabel;
@property (weak, nonatomic) IBOutlet UIButton *closeButton;

@property NeftaPlugin_iOS *plugin;
@property Placement *placement;
@property bool isAutoLoad;

-(void)SetPlacement:(NeftaPlugin_iOS *) plugin with:(Placement *) placement autoLoad: (BOOL) autoLoad;
-(void)SetAutoLoad:(BOOL) autoLoad;
-(void)OnBidClick:(UIButton *) sender;
-(void)OnLoadClick:(UIButton *) sender;
-(void)OnShowClick:(UIButton *) sender;
-(void)OnCloseClick:(UIButton *) sender;

-(void)OnBid:(BidResponse *)bidResponse;
-(void)OnLoadStart;
-(void)OnLoadFail:(NSString *)error;
-(void)OnLoad;
-(void)OnShow:(NSInteger)width height:(NSInteger)height;
-(void)OnClose;

-(void)SyncUi;
@end
