//
//  UICollectionViewCell+Online.h
//  PepperJelly
//
//  Created by Evandro Harrison Hoffmann on 4/23/16.
//  Copyright © 2016 DogTownMedia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UICollectionViewCell (Online)

-(void)setImageWithUrl:(NSString *)url placeHolder:(UIImage *)placeholder showLoading:(BOOL)showLoading imageViewName:(NSString*)imageViewName collectionView:(UICollectionView*)collectionView indexPath:(NSIndexPath*)indexPath completion:(void (^)(UIImage *image))completion;
-(void)setImageWithUrl:(NSString *)url thumbnail:(NSString*)thumbnail placeHolder:(UIImage *)placeholder showLoading:(BOOL)showLoading imageViewName:(NSString*)imageViewName collectionView:(UICollectionView*)collectionView indexPath:(NSIndexPath*)indexPath completion:(void (^)(UIImage *image))completion;

@end
