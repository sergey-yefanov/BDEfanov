//
//  Worker.h
//  BDEfanov
//
//  Created by Сергей on 04.12.13.
//  Copyright (c) 2013 MyCompany. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Worker : NSManagedObject

@property (nonatomic, retain) NSString * adress;
@property (nonatomic, retain) NSDate * birthdate;
@property (nonatomic, retain) NSNumber * idWorker;
@property (nonatomic, retain) NSString * lastname;
@property (nonatomic, retain) NSNumber * med;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * otec;
@property (nonatomic, retain) NSString * passeport;
@property (nonatomic, retain) NSNumber * tel;
@property (nonatomic, retain) NSNumber * idDolz;

@end
