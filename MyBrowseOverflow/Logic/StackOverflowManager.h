//
//  StackOverflowManager.h
//  MyBrowseOverflow
//
//  Created by Alex Salom on 18/5/15.
//  Copyright (c) 2015 Alex Salom © alexsalom.es. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StackOverflowManagerDelegate.h"
@class StackOverflowCommunicator;
@class Topic;
@class QuestionBuilder;
@class Question;

static NSString * const StackOverflowManagerError;

enum {
    StackOverflowManagerErrorQuestionSearchCode
};

@interface StackOverflowManager : NSObject
@property (assign, nonatomic) id<StackOverflowManagerDelegate> delegate;
@property (strong) StackOverflowCommunicator *communicator;
@property (strong) QuestionBuilder *questionBuilder;

- (void)fetchQuestionsOnTopic:(Topic *)topic;
- (void)fetchBodyForQuestion:(Question *)question;
- (void)searchingForQuestionsFailedWithError:(NSError *)error;
- (void)receivedQuestionsJson:(NSString *)objectNotation;

@end
