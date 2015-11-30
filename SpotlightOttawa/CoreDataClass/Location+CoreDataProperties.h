//
//  Location+CoreDataProperties.h
//  SpotlightOttawa
//
//  Created by Nignesh on 2015-11-29.
//  Copyright © 2015 patel.nignesh2108@gmail.com. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Location.h"

NS_ASSUME_NONNULL_BEGIN

@interface Location (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *id;
@property ( nonatomic, assign) BOOL active;
@property (nullable, nonatomic, retain) NSString *type;
@property (nullable, nonatomic, retain) NSString *address_english;
@property (nullable, nonatomic, retain) NSString *address_french;
@property (nullable, nonatomic, retain) NSString *city;
@property (nullable, nonatomic, retain) NSString *intersection_english;
@property (nullable, nonatomic, retain) NSString *intersection_french;
@property (nullable, nonatomic, retain) NSString *name_english;
@property (nullable, nonatomic, retain) NSString *name_french;
@property (nullable, nonatomic, retain) NSString *postal_code;
@property (nullable, nonatomic, retain) NSString *province;

@end

NS_ASSUME_NONNULL_END
