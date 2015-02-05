//
//  ToDoItem.h
//  ToDoList
//
//  Created by Gabe Kessler on 2/5/15.
//  Copyright (c) 2015 Gabe Kessler. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

-(void)markAsCompleted:(BOOL)isComplete;

@end
