﻿/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()
#define USERIMPL(...)

/***********************************************************************
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}
}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_)
	{
		(this->__vwsn_precompile_0 = __vwsn_this_);
		(this->__vwsn_precompile_31 = ::vl::__vwsn::This(this->__vwsn_precompile_0)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_31)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint32_t>(480); __vwsn_temp__.y = static_cast<::vl::vint32_t>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint32_t>(480); __vwsn_temp__.y = static_cast<::vl::vint32_t>(320); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_0)->SetText(::vl::WString(L"Table", false));
		}
		(this->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetCellPadding(::vl::__vwsn::Parse<::vl::vint32_t>(::vl::WString(L"5", false)));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint32_t>(5); __vwsn_temp__.top = static_cast<::vl::vint32_t>(5); __vwsn_temp__.right = static_cast<::vl::vint32_t>(5); __vwsn_temp__.bottom = static_cast<::vl::vint32_t>(5); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowsAndColumns(static_cast<::vl::vint32_t>(6), static_cast<::vl::vint32_t>(3));
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint32_t>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint32_t>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = static_cast<::vl::vint32_t>(20); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint32_t>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint32_t>(3), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint32_t>(4), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetRowOption(static_cast<::vl::vint32_t>(5), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint32_t>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint32_t>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_1)->SetColumnOption(static_cast<::vl::vint32_t>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_2 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetSite(static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(3));
		}
		(this->__vwsn_precompile_3 = ::vl::Ptr<::vl::presentation::elements::GuiSolidLabelElement>(::vl::reflection::description::Element_Constructor<::vl::presentation::elements::GuiSolidLabelElement>()));
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3.Obj())->SetVerticalAlignment(::vl::presentation::Alignment::Center);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3.Obj())->SetHorizontalAlignment(::vl::presentation::Alignment::Center);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3.Obj())->SetFont([&](){ ::vl::presentation::FontProperties __vwsn_temp__; __vwsn_temp__.fontFamily = ::vl::WString(L"Lucida Calligraphy", false); __vwsn_temp__.size = static_cast<::vl::vint32_t>(96); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_3.Obj())->SetText(::vl::WString(L"GacUI", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_2)->SetOwnedElement(::vl::Ptr<::vl::presentation::elements::IGuiGraphicsElement>(this->__vwsn_precompile_3));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_2));
		}
		(this->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->SetSite(static_cast<::vl::vint32_t>(2), static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(this->__vwsn_precompile_5 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_5)->SetText(::vl::WString(L"User Name:", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_4)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_5)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_4));
		}
		(this->__vwsn_precompile_6 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->SetSite(static_cast<::vl::vint32_t>(2), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateTextBoxStyle();
			(this->__vwsn_precompile_7 = new ::vl::presentation::controls::GuiSinglelineTextBox(__vwsn_controlStyle_));
		}
		(this->__vwsn_precompile_8 = ::vl::__vwsn::This(this->__vwsn_precompile_7)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_8)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint32_t>(0); __vwsn_temp__.top = static_cast<::vl::vint32_t>(0); __vwsn_temp__.right = static_cast<::vl::vint32_t>(0); __vwsn_temp__.bottom = static_cast<::vl::vint32_t>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_6)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_7)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_6));
		}
		(this->__vwsn_precompile_9 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_9)->SetSite(static_cast<::vl::vint32_t>(2), static_cast<::vl::vint32_t>(2), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(this->__vwsn_precompile_10 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(this->__vwsn_precompile_11 = ::vl::__vwsn::This(this->__vwsn_precompile_10)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_11)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint32_t>(0); __vwsn_temp__.top = static_cast<::vl::vint32_t>(0); __vwsn_temp__.right = static_cast<::vl::vint32_t>(0); __vwsn_temp__.bottom = static_cast<::vl::vint32_t>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_10)->SetText(::vl::WString(L"Forget User Name ...", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_9)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_10)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_9));
		}
		(this->__vwsn_precompile_12 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_12)->SetSite(static_cast<::vl::vint32_t>(3), static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(this->__vwsn_precompile_13 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_13)->SetText(::vl::WString(L"Password:", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_12)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_13)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_12));
		}
		(this->__vwsn_precompile_14 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->SetSite(static_cast<::vl::vint32_t>(3), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateTextBoxStyle();
			(this->__vwsn_precompile_15 = new ::vl::presentation::controls::GuiSinglelineTextBox(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_15)->SetPasswordChar(::vl::__vwsn::Parse<wchar_t>(::vl::WString(L"*", false)));
		}
		(this->__vwsn_precompile_16 = ::vl::__vwsn::This(this->__vwsn_precompile_15)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_16)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint32_t>(0); __vwsn_temp__.top = static_cast<::vl::vint32_t>(0); __vwsn_temp__.right = static_cast<::vl::vint32_t>(0); __vwsn_temp__.bottom = static_cast<::vl::vint32_t>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_14)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_15)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_14));
		}
		(this->__vwsn_precompile_17 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_17)->SetSite(static_cast<::vl::vint32_t>(3), static_cast<::vl::vint32_t>(2), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(this->__vwsn_precompile_18 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(this->__vwsn_precompile_19 = ::vl::__vwsn::This(this->__vwsn_precompile_18)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_19)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint32_t>(0); __vwsn_temp__.top = static_cast<::vl::vint32_t>(0); __vwsn_temp__.right = static_cast<::vl::vint32_t>(0); __vwsn_temp__.bottom = static_cast<::vl::vint32_t>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_18)->SetText(::vl::WString(L"Forget Password ...", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_17)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_18)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_17));
		}
		(this->__vwsn_precompile_20 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_20)->SetSite(static_cast<::vl::vint32_t>(5), static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(3));
		}
		(this->__vwsn_precompile_21 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = static_cast<::vl::vint32_t>(0); __vwsn_temp__.top = static_cast<::vl::vint32_t>(0); __vwsn_temp__.right = static_cast<::vl::vint32_t>(0); __vwsn_temp__.bottom = static_cast<::vl::vint32_t>(0); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetRowsAndColumns(static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(4));
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetRowOption(static_cast<::vl::vint32_t>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetColumnOption(static_cast<::vl::vint32_t>(0), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetColumnOption(static_cast<::vl::vint32_t>(1), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetColumnOption(static_cast<::vl::vint32_t>(2), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = static_cast<double>(1.0); return __vwsn_temp__; }());
			::vl::__vwsn::This(this->__vwsn_precompile_21)->SetColumnOption(static_cast<::vl::vint32_t>(3), [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
		}
		(this->__vwsn_precompile_22 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_22)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.right = static_cast<::vl::vint32_t>(10); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_22)->SetSite(static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(this->__vwsn_precompile_23 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(this->__vwsn_precompile_24 = ::vl::__vwsn::This(this->__vwsn_precompile_23)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_24)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint32_t>(100); __vwsn_temp__.y = static_cast<::vl::vint32_t>(30); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_23)->SetText(::vl::WString(L"Sign Up ...", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_22)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_23)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_22));
		}
		(this->__vwsn_precompile_25 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_25)->SetSite(static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(this->__vwsn_precompile_26 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(this->__vwsn_precompile_27 = ::vl::__vwsn::This(this->__vwsn_precompile_26)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_27)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint32_t>(100); __vwsn_temp__.y = static_cast<::vl::vint32_t>(30); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_26)->SetText(::vl::WString(L"Log In", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_25)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_26)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_25));
		}
		(this->__vwsn_precompile_28 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_28)->SetSite(static_cast<::vl::vint32_t>(0), static_cast<::vl::vint32_t>(3), static_cast<::vl::vint32_t>(1), static_cast<::vl::vint32_t>(1));
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateButtonStyle();
			(this->__vwsn_precompile_29 = new ::vl::presentation::controls::GuiButton(__vwsn_controlStyle_));
		}
		(this->__vwsn_precompile_30 = ::vl::__vwsn::This(this->__vwsn_precompile_29)->GetBoundsComposition());
		{
			::vl::__vwsn::This(this->__vwsn_precompile_30)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = static_cast<::vl::vint32_t>(100); __vwsn_temp__.y = static_cast<::vl::vint32_t>(30); return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_29)->SetText(::vl::WString(L"Close", false));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_28)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this->__vwsn_precompile_29)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_21)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_28));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_20)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_21));
		}
		{
			::vl::__vwsn::This(this->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_20));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this->__vwsn_precompile_0)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(this->__vwsn_precompile_1));
		}
	}

	MainWindowConstructor::MainWindowConstructor()
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateWindowStyle())
	{
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"demo::MainWindow", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->SetResourceResolver(__vwsn_resolver_);
		::vl::__vwsn::This(this)->__vwsn_initialize_instance_(this);
	}

	MainWindow::~MainWindow()
	{
		this->FinalizeInstanceRecursively(static_cast<::vl::presentation::controls::GuiControl*>(this));
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_10)
				CLASS_MEMBER_FIELD(__vwsn_precompile_11)
				CLASS_MEMBER_FIELD(__vwsn_precompile_12)
				CLASS_MEMBER_FIELD(__vwsn_precompile_13)
				CLASS_MEMBER_FIELD(__vwsn_precompile_14)
				CLASS_MEMBER_FIELD(__vwsn_precompile_15)
				CLASS_MEMBER_FIELD(__vwsn_precompile_16)
				CLASS_MEMBER_FIELD(__vwsn_precompile_17)
				CLASS_MEMBER_FIELD(__vwsn_precompile_18)
				CLASS_MEMBER_FIELD(__vwsn_precompile_19)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_20)
				CLASS_MEMBER_FIELD(__vwsn_precompile_21)
				CLASS_MEMBER_FIELD(__vwsn_precompile_22)
				CLASS_MEMBER_FIELD(__vwsn_precompile_23)
				CLASS_MEMBER_FIELD(__vwsn_precompile_24)
				CLASS_MEMBER_FIELD(__vwsn_precompile_25)
				CLASS_MEMBER_FIELD(__vwsn_precompile_26)
				CLASS_MEMBER_FIELD(__vwsn_precompile_27)
				CLASS_MEMBER_FIELD(__vwsn_precompile_28)
				CLASS_MEMBER_FIELD(__vwsn_precompile_29)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_30)
				CLASS_MEMBER_FIELD(__vwsn_precompile_31)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(__vwsn_precompile_9)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadDemoTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
