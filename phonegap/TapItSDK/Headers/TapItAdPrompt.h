//
//  TapItPopupAd.h
//  TapIt-iOS-Sample
//
//  Created by Nick Penteado on 7/20/12.
//  Copyright (c) 2012 TapIt!. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TapItAdDelegates.h"

@class TapItRequest;

@interface TapItAdPrompt : NSObject <UIActionSheetDelegate>

@property (assign, nonatomic) id<TapItAdPromptDelegate> delegate;

- (id)initWithRequest:(TapItRequest *)request;

- (void)showAsAlert;
- (void)showAsActionSheet;

@end
