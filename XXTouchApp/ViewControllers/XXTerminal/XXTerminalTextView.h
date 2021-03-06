//
//  XXTerminalTextView.h
//  XXTouchApp
//
//  Created by Zheng on 10/11/2016.
//  Copyright © 2016 Zheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ICTextView.h"

/*
 This TextView is used to display standard output buffer and not editable.
 */

@interface XXTerminalTextView : ICTextView
- (void)appendString:(NSString *)text;
- (void)appendMessage:(NSString *)text;
- (void)appendError:(NSString *)text;
- (void)resetTypingAttributes;

- (BOOL)canDeleteBackward;
- (NSString *)getBufferString;
@end
