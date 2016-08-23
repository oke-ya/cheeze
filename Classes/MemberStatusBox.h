//
//  MemberStatusBox.h
//  cheeze
//
//  Created by 上野 真史 on 2016/08/23.
//
//

#ifndef __cheeze__MemberStatusBox__
#define __cheeze__MemberStatusBox__

#include "cocos2d.h"
#include "Touchable.h"

class UnitData;
class WeaponData;

using namespace cocos2d;

class MemberStatusBox : private Touchable
{
public:
    virtual void appendTo(PageView* pageView, const int position);
    virtual ~MemberStatusBox() = default;
private:
    void init();
    void setStatus();
    void setWeapon();
    void setCommands();
    inline Node* getCsb(){ return _csb; };
    Node* _csb { nullptr };
    const UnitData& getUnitData() const;
    const WeaponData& getWeaponData() const;
    inline const int getPosition() const { return _position; }
    int _position { -1 };
};

#endif /* defined(__cheeze__MemberStatusBox__) */