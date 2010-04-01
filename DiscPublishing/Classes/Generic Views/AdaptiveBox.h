//
//  AdaptiveBox.h
//  DiscPublishing
//
//  Created by Alessandro Volz on 3/3/10.
//  Copyright 2010 OsiriX Team. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface AdaptiveBox : NSBox {
	NSSize idealContentSize;
}

-(void)setContentView:(NSView*)view;

@end
