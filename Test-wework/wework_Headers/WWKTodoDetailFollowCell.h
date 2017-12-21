//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, WWKAvatarImageView;

@interface WWKTodoDetailFollowCell : UITableViewCell
{
    _Bool _isLastCell;
    WWKAvatarImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_stateLabel;
    UIView *_separatorView;
    scoped_refptr_e1f85e48 _user;
}

@property(nonatomic, setter=setIsLastCell:) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
@property(nonatomic) scoped_refptr_e1f85e48 user; // @synthesize user=_user;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) WWKAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)layoutSubviewsWithWidth:(double)arg1;
- (void)layoutSubviews;
- (void)initSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
