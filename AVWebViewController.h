//
//  AVWebViewController.h
//
//  Created by Abraham Vegh on 6/12/11.
//  Copyright 2011 Abraham Vegh. All rights reserved.
//

#import <objc/runtime.h>
#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>


@class AVWebViewController;
@protocol AVWebViewControllerDelegate

- (void) webViewControllerDidStartLoading:(AVWebViewController *)controller;
- (void) webViewControllerDidFinishLoading:(AVWebViewController *)controller;
- (void) webViewControllerDidFailLoading:(AVWebViewController *)controller withError:(NSError *)anError;
//	These are just piped up stock methods

@end


@interface AVWebViewController : UIViewController

- (id) initWithURL: (NSURL *) anURL;
- (id) initWithURLString: (NSString *) URLString;
@property (nonatomic, copy) NSURL *representedURL;

- (void) reload;

@property (nonatomic, readwrite, assign) id<AVWebViewControllerDelegate> delegate;
@property (nonatomic, assign) BOOL allowsSendingHTMLContents; // defaults to NO

@end
