#pragma once
#include "Action.h"
#include "dx2dxStruct.h"

NS_DX2DX
{
	class ScaleTo
	: public Action
	{
	private:
		DISALLOW_COPY_AND_ASSIGN(ScaleTo);
		ScaleTo(float duration, Point scale);
		~ScaleTo();

		Point _OrgScale, _TargetScale, _ScaleDelta;
		float _Duration;

	public:
		static ScaleTo* Create(float duration, Point scale);

		virtual void OnStartWithTarget(Node* const node) override;
		virtual void Run(Node* const node) override;

		virtual Action* Clone() const override;
		virtual Action* Reverse() const override;
	};

}