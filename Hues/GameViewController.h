//
//  GameViewController.h
//  Hues
//
//  Created by Drew Dunne on 7/22/15.
//  Copyright (c) 2015 Drew Dunne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <GameKit/GameKit.h>
#import "AppDelegate.h"
#import "GridView.h"
#import "GameInfoView.h"
#import "ScoreModel.h"
//#import "PauseAlertView.h"
#import "PauseCover.h"

@interface GameViewController : UIViewController  <GridViewDelegate, PauseCoverDelegate> {
    GridView *gridView;
    GameInfoView *gameInfoView;
    
//    PauseAlertView *pauseView;
    PauseCover *pauseView;
    
    BOOL shouldRestartGame;
    UIColor *selectedColor;
    UIColor *discoloredColor;
    NSInteger discoloredTile;
    NSInteger varyR;
    NSInteger varyG;
    NSInteger varyB;
    CGFloat varyH;
    NSInteger round;
    
    NSInteger score;
    NSInteger time;
    NSTimer *gameTimer;
    
    AppDelegate *appDelegate;
}

@end
