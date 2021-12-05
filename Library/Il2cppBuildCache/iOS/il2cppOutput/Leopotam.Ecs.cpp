#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>
struct EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F;
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738;
// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A;
// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4;
// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>
struct List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970;
// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>
struct List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>[]
struct EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7;
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8;
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7;
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1;
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128;
// Leopotam.Ecs.IEcsSystemsDebugListener[]
struct IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660;
// Leopotam.Ecs.IEcsWorldDebugListener[]
struct IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2;
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// Leopotam.Ecs.EcsComponentPool
struct EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C;
// Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0;
// Leopotam.Ecs.EcsFilter
struct EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55;
// Leopotam.Ecs.EcsIgnoreInjectAttribute
struct EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068;
// Leopotam.Ecs.EcsSystems
struct EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639;
// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C;
// Leopotam.Ecs.EcsWorld
struct EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t7C31CBFB035DA412880D90BEFBFE980E92E7B12C;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Leopotam.Ecs.IEcsComponentPool
struct IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD;
// Leopotam.Ecs.IEcsRunSystem
struct IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328;
// Leopotam.Ecs.IEcsSystem
struct IEcsSystem_tA00E3B07665437447F99AB079C419617E2B4BEB1;
// Leopotam.Ecs.IEcsSystemsDebugListener
struct IEcsSystemsDebugListener_tC81877BA2DF323E689B93F302777AEA879F5E1E8;
// Leopotam.Ecs.IEcsWorldDebugListener
struct IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932;
// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3188C6BF743FDB986678BFFC5F540708B12FBFD2;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsSystemsDebugListener_tC81877BA2DF323E689B93F302777AEA879F5E1E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0983E2F566C219C5C61211ED8BC8EA7F270A906E;
IL2CPP_EXTERN_C String_t* _stringLiteral149412EF5DD4FABC7521825E523B524E1EB45E71;
IL2CPP_EXTERN_C String_t* _stringLiteral25A4FBE3BF5562DC866CA4DA98C373F38B573C74;
IL2CPP_EXTERN_C String_t* _stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68;
IL2CPP_EXTERN_C String_t* _stringLiteral3A6FDF288A824FB48440B5D0C92A42043315A3AD;
IL2CPP_EXTERN_C String_t* _stringLiteral42421D059AAE096C7B60839ABFEB44B5C73C66C4;
IL2CPP_EXTERN_C String_t* _stringLiteral432B630D178FA64EAD79FE90B66545CC0E025765;
IL2CPP_EXTERN_C String_t* _stringLiteral457FC7B96A28919D20AEDC09CA3CDC4CC21B0D13;
IL2CPP_EXTERN_C String_t* _stringLiteral46E688EE9CEA12647607134D9F4CFBDE2F065AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral4B75DBAF67E4FF20F08D39DC9C8BA76DFA05C0AA;
IL2CPP_EXTERN_C String_t* _stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD;
IL2CPP_EXTERN_C String_t* _stringLiteral4F0C344884FC9B83B4A2A736DE917C41C17AF206;
IL2CPP_EXTERN_C String_t* _stringLiteral526364499B42E287EE096D7EA2B6D87A51289D0E;
IL2CPP_EXTERN_C String_t* _stringLiteral57D91E963C1256046C939886D4EF47C540C197E2;
IL2CPP_EXTERN_C String_t* _stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979;
IL2CPP_EXTERN_C String_t* _stringLiteral606C771900936C652E7DC0D284530387D5ED57D1;
IL2CPP_EXTERN_C String_t* _stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC;
IL2CPP_EXTERN_C String_t* _stringLiteral629984DF45E8ABD6B751FF45E163326B9D580988;
IL2CPP_EXTERN_C String_t* _stringLiteral65C50EE4F514C906B18B5B9D555024AA24DD14E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6A593CE8065C964E88607664A02F0AC49384C3FA;
IL2CPP_EXTERN_C String_t* _stringLiteral6A6D6805DD57E5756D9C4E976A28536E727965A2;
IL2CPP_EXTERN_C String_t* _stringLiteral6CB6CBAEFB707D790B1CB2ED0E4DEF2AB92D4CA7;
IL2CPP_EXTERN_C String_t* _stringLiteral6ECE305DF9F97A39845FE33E7F8ECEDE4CAC75C1;
IL2CPP_EXTERN_C String_t* _stringLiteral6FC4420D546F38081E27458A6B155EA0E2FBBA4D;
IL2CPP_EXTERN_C String_t* _stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D;
IL2CPP_EXTERN_C String_t* _stringLiteral9A0E9ABEC1A97A416116255237E07FACD27092A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9AB398480C1B076194BB4CBA8FB26B3378F973A6;
IL2CPP_EXTERN_C String_t* _stringLiteral9E971242C1AFFA651AB3B5655687128872AFBAF8;
IL2CPP_EXTERN_C String_t* _stringLiteralA906DC2DAC00369EDB944E99FDB0C529B1279531;
IL2CPP_EXTERN_C String_t* _stringLiteralA9A6DF0DA0A3492705FE14C392B46B40246A923F;
IL2CPP_EXTERN_C String_t* _stringLiteralAA66ED9C74A8CE529E01D730BA97D57E57A34F95;
IL2CPP_EXTERN_C String_t* _stringLiteralAB9E2385A9B81E000D6B67C908B888F657688F53;
IL2CPP_EXTERN_C String_t* _stringLiteralAD9511B3791B6914024A8A85095F5542D1019951;
IL2CPP_EXTERN_C String_t* _stringLiteralBAD9D618F46B8767EA3F5D2E39C4174C54422E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC74D986764FC80FC48FB6A690AE1752FE4336E20;
IL2CPP_EXTERN_C String_t* _stringLiteralC7740996BF0E7FB3BDF5EE9BACDA3879D19B6044;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF755D2E5400B69B5641D660ED14A00DA630865;
IL2CPP_EXTERN_C String_t* _stringLiteralD005F93B177BE1B4026669C892E44D2F18CCCD6C;
IL2CPP_EXTERN_C String_t* _stringLiteralD6C6C179BF2FFCA1A20E3ECDBE723A7176ED7715;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE5BF82CEA932C3DA6E3DCA5F71AC5CC36746C870;
IL2CPP_EXTERN_C String_t* _stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556;
IL2CPP_EXTERN_C String_t* _stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F;
IL2CPP_EXTERN_C String_t* _stringLiteralEFD0582341B5BB3B305762DA13B0072CAE573CFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF36C572D06C6253E318E68863ED100E5A2FBA478;
IL2CPP_EXTERN_C String_t* _stringLiteralF4CE6C363FEC68EE5E06DCCDE841F049522A07A2;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79A84F0C410242A95761BE689BB0C77471F1A4;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Copy_m6B749A1560FFACF793181203CC660A03A01D3F65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_GetComponentTypes_m514CE84BF6B20945875143B6837A11AE47760555_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_GetComponentValues_m49F8E2850DC3B33CD8BBAAA4AD16BD605D60F13B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_GetComponentsCount_mAD0265A2CBB20E7700DF9F00A68E16393E197D7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsEntityExtensions_MoveTo_m8DA49EDCF3BC885122BFEC81C71D8A7B58A00E1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_AddDebugListener_m6B591ADDBD124EAE8279125D01D18A02A5C6E2F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Destroy_mBF2CB72BCAA487DF99C431A7945E78C22E6E328E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_GetRunSystemState_mD70B402B67CA7E55A85EE42E801252D0B86BF95E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Init_mBBE3BC3106291DE2CD50F401210E492280FD4879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Inject_mDB2C8962A0F764B113EE74E30C16531B39B67849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_RemoveDebugListener_m8682D029A1653066E9333B4C5CF5A33D2686ABD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_Run_mE471860F775B875F25F462737C5FEB5563458666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsSystems_SetRunSystemState_m6194FDC3B9971633D00F1F43D6F8C74A84836AFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_AddDebugListener_mA5BC1C920D3DAFB91079D19C2B1EA1FBFF3971C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_Destroy_m2C0414D8905D963ECED938FE60827053C11F5EFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_RemoveDebugListener_m062E1F4C567EDF7D310F1B4A5BAEC578E79B1A9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC60BEFA252C2C26B7BF67F8218834090C2956B40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCF11A73514FD51E426C6ADD1356E602779D883C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mD8752D6D268BFED6016DC80D946A869ED0B6D9E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mFB35EBBAFBFE02C3EF85A6568C0E04169FC81D8D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m523AA645DFA1BD8ADF220B73101ACF88FD09405E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8912F67D79EA3CD43A4CDFE9C1A42130A9C93A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFEA474E0031887519BF6C609D948C4032DBA7719_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m4CBE152E035FD37F272E4F1AF7243136FA4F73FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0;;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com;;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke;
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke;;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7;
struct EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8;
struct EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1;
struct IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2;
struct EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCA652546AE2D2D39F105DF4CD511CEB3A7A8DE10 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>
struct Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___entries_1)); }
	inline EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t586DF3422D207142301B2E640F29B3723ED0A02E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___keys_7)); }
	inline KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tA1F3BB13551E437D1EF88D372F5BF1E8115F027F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ___values_8)); }
	inline ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tE11492BD50FDB99367509ECC20A2CBA75CD5F919 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___entries_1)); }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB55287EA11F7C665F930EF3A359F186CD3AE5EC1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___keys_7)); }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDB6919EBDF36E83E708A483A6C4CF8065F62D1E0 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ___values_8)); }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t8738745D8513A557A82E6E097DF4D4E70D5253C2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___entries_1)); }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___keys_7)); }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___values_8)); }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>
struct EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F, ___Items_0)); }
	inline EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* get_Items_0() const { return ___Items_0; }
	inline EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>
struct EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727, ___Items_0)); }
	inline EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* get_Items_0() const { return ___Items_0; }
	inline EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>
struct EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F, ___Items_0)); }
	inline EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* get_Items_0() const { return ___Items_0; }
	inline EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>
struct EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738, ___Items_0)); }
	inline IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* get_Items_0() const { return ___Items_0; }
	inline IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<System.Int32>
struct EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A, ___Items_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Items_0() const { return ___Items_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// Leopotam.Ecs.EcsGrowList`1<System.Object>
struct EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857  : public RuntimeObject
{
public:
	// T[] Leopotam.Ecs.EcsGrowList`1::Items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Items_0;
	// System.Int32 Leopotam.Ecs.EcsGrowList`1::Count
	int32_t ___Count_1;

public:
	inline static int32_t get_offset_of_Items_0() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857, ___Items_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Items_0() const { return ___Items_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Items_0() { return &___Items_0; }
	inline void set_Items_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Items_0), (void*)value);
	}

	inline static int32_t get_offset_of_Count_1() { return static_cast<int32_t>(offsetof(EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857, ___Count_1)); }
	inline int32_t get_Count_1() const { return ___Count_1; }
	inline int32_t* get_address_of_Count_1() { return &___Count_1; }
	inline void set_Count_1(int32_t value)
	{
		___Count_1 = value;
	}
};


// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>
struct List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970, ____items_1)); }
	inline IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660* get__items_1() const { return ____items_1; }
	inline IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970_StaticFields, ____emptyArray_5)); }
	inline IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IEcsSystemsDebugListenerU5BU5D_tB6B8B7DADDB10B15F164BB785ED5F6A3F9823660* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>
struct List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E, ____items_1)); }
	inline IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72* get__items_1() const { return ____items_1; }
	inline IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E_StaticFields, ____emptyArray_5)); }
	inline IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IEcsWorldDebugListenerU5BU5D_tA0249751B36880BF5A55BD1FC2D18E9AAA8BAD72* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30  : public RuntimeObject
{
public:

public:
};


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Leopotam.Ecs.EcsComponentPool
struct EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C  : public RuntimeObject
{
public:

public:
};

struct EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C_StaticFields
{
public:
	// System.Int32 Leopotam.Ecs.EcsComponentPool::ComponentTypesCount
	int32_t ___ComponentTypesCount_0;

public:
	inline static int32_t get_offset_of_ComponentTypesCount_0() { return static_cast<int32_t>(offsetof(EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C_StaticFields, ___ComponentTypesCount_0)); }
	inline int32_t get_ComponentTypesCount_0() const { return ___ComponentTypesCount_0; }
	inline int32_t* get_address_of_ComponentTypesCount_0() { return &___ComponentTypesCount_0; }
	inline void set_ComponentTypesCount_0(int32_t value)
	{
		___ComponentTypesCount_0 = value;
	}
};


// Leopotam.Ecs.EcsComponentRefExtensions
struct EcsComponentRefExtensions_t0A43A7F601C16668D8A35CCCE25673D8ED193F95  : public RuntimeObject
{
public:

public:
};


// Leopotam.Ecs.EcsEntityExtensions
struct EcsEntityExtensions_t37B48A1DF3BC16FE0A89EC543A9B06AC76DEB2FC  : public RuntimeObject
{
public:

public:
};


// Leopotam.Ecs.EcsFilter
struct EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55  : public RuntimeObject
{
public:
	// Leopotam.Ecs.EcsEntity[] Leopotam.Ecs.EcsFilter::Entities
	EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* ___Entities_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::EntitiesMap
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___EntitiesMap_1;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCount
	int32_t ___EntitiesCount_2;
	// System.Int32 Leopotam.Ecs.EcsFilter::LockCount
	int32_t ___LockCount_3;
	// System.Int32 Leopotam.Ecs.EcsFilter::EntitiesCacheSize
	int32_t ___EntitiesCacheSize_4;
	// Leopotam.Ecs.EcsFilter/DelayedOp[] Leopotam.Ecs.EcsFilter::_delayedOps
	DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* ____delayedOps_5;
	// System.Int32 Leopotam.Ecs.EcsFilter::_delayedOpsCount
	int32_t ____delayedOpsCount_6;
	// System.Int32[] Leopotam.Ecs.EcsFilter::IncludedTypeIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___IncludedTypeIndices_7;
	// System.Int32[] Leopotam.Ecs.EcsFilter::ExcludedTypeIndices
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___ExcludedTypeIndices_8;
	// System.Type[] Leopotam.Ecs.EcsFilter::IncludedTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___IncludedTypes_9;
	// System.Type[] Leopotam.Ecs.EcsFilter::ExcludedTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___ExcludedTypes_10;

public:
	inline static int32_t get_offset_of_Entities_0() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___Entities_0)); }
	inline EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* get_Entities_0() const { return ___Entities_0; }
	inline EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** get_address_of_Entities_0() { return &___Entities_0; }
	inline void set_Entities_0(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* value)
	{
		___Entities_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entities_0), (void*)value);
	}

	inline static int32_t get_offset_of_EntitiesMap_1() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___EntitiesMap_1)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_EntitiesMap_1() const { return ___EntitiesMap_1; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_EntitiesMap_1() { return &___EntitiesMap_1; }
	inline void set_EntitiesMap_1(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___EntitiesMap_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EntitiesMap_1), (void*)value);
	}

	inline static int32_t get_offset_of_EntitiesCount_2() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___EntitiesCount_2)); }
	inline int32_t get_EntitiesCount_2() const { return ___EntitiesCount_2; }
	inline int32_t* get_address_of_EntitiesCount_2() { return &___EntitiesCount_2; }
	inline void set_EntitiesCount_2(int32_t value)
	{
		___EntitiesCount_2 = value;
	}

	inline static int32_t get_offset_of_LockCount_3() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___LockCount_3)); }
	inline int32_t get_LockCount_3() const { return ___LockCount_3; }
	inline int32_t* get_address_of_LockCount_3() { return &___LockCount_3; }
	inline void set_LockCount_3(int32_t value)
	{
		___LockCount_3 = value;
	}

	inline static int32_t get_offset_of_EntitiesCacheSize_4() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___EntitiesCacheSize_4)); }
	inline int32_t get_EntitiesCacheSize_4() const { return ___EntitiesCacheSize_4; }
	inline int32_t* get_address_of_EntitiesCacheSize_4() { return &___EntitiesCacheSize_4; }
	inline void set_EntitiesCacheSize_4(int32_t value)
	{
		___EntitiesCacheSize_4 = value;
	}

	inline static int32_t get_offset_of__delayedOps_5() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ____delayedOps_5)); }
	inline DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* get__delayedOps_5() const { return ____delayedOps_5; }
	inline DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** get_address_of__delayedOps_5() { return &____delayedOps_5; }
	inline void set__delayedOps_5(DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* value)
	{
		____delayedOps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____delayedOps_5), (void*)value);
	}

	inline static int32_t get_offset_of__delayedOpsCount_6() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ____delayedOpsCount_6)); }
	inline int32_t get__delayedOpsCount_6() const { return ____delayedOpsCount_6; }
	inline int32_t* get_address_of__delayedOpsCount_6() { return &____delayedOpsCount_6; }
	inline void set__delayedOpsCount_6(int32_t value)
	{
		____delayedOpsCount_6 = value;
	}

	inline static int32_t get_offset_of_IncludedTypeIndices_7() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___IncludedTypeIndices_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_IncludedTypeIndices_7() const { return ___IncludedTypeIndices_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_IncludedTypeIndices_7() { return &___IncludedTypeIndices_7; }
	inline void set_IncludedTypeIndices_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___IncludedTypeIndices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncludedTypeIndices_7), (void*)value);
	}

	inline static int32_t get_offset_of_ExcludedTypeIndices_8() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___ExcludedTypeIndices_8)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_ExcludedTypeIndices_8() const { return ___ExcludedTypeIndices_8; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_ExcludedTypeIndices_8() { return &___ExcludedTypeIndices_8; }
	inline void set_ExcludedTypeIndices_8(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___ExcludedTypeIndices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExcludedTypeIndices_8), (void*)value);
	}

	inline static int32_t get_offset_of_IncludedTypes_9() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___IncludedTypes_9)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_IncludedTypes_9() const { return ___IncludedTypes_9; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_IncludedTypes_9() { return &___IncludedTypes_9; }
	inline void set_IncludedTypes_9(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___IncludedTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IncludedTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_ExcludedTypes_10() { return static_cast<int32_t>(offsetof(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55, ___ExcludedTypes_10)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_ExcludedTypes_10() const { return ___ExcludedTypes_10; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_ExcludedTypes_10() { return &___ExcludedTypes_10; }
	inline void set_ExcludedTypes_10(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___ExcludedTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExcludedTypes_10), (void*)value);
	}
};


// Leopotam.Ecs.EcsSystems
struct EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639  : public RuntimeObject
{
public:
	// System.String Leopotam.Ecs.EcsSystems::Name
	String_t* ___Name_0;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsSystems::World
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___World_1;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem> Leopotam.Ecs.EcsSystems::_allSystems
	EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * ____allSystems_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem> Leopotam.Ecs.EcsSystems::_runSystems
	EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * ____runSystems_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsSystems::_namedRunSystems
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ____namedRunSystems_4;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> Leopotam.Ecs.EcsSystems::_injections
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ____injections_5;
	// System.Boolean Leopotam.Ecs.EcsSystems::_injected
	bool ____injected_6;
	// System.Boolean Leopotam.Ecs.EcsSystems::_initialized
	bool ____initialized_7;
	// System.Boolean Leopotam.Ecs.EcsSystems::_destroyed
	bool ____destroyed_8;
	// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener> Leopotam.Ecs.EcsSystems::_debugListeners
	List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * ____debugListeners_9;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_World_1() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ___World_1)); }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * get_World_1() const { return ___World_1; }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 ** get_address_of_World_1() { return &___World_1; }
	inline void set_World_1(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * value)
	{
		___World_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___World_1), (void*)value);
	}

	inline static int32_t get_offset_of__allSystems_2() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____allSystems_2)); }
	inline EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * get__allSystems_2() const { return ____allSystems_2; }
	inline EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 ** get_address_of__allSystems_2() { return &____allSystems_2; }
	inline void set__allSystems_2(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * value)
	{
		____allSystems_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allSystems_2), (void*)value);
	}

	inline static int32_t get_offset_of__runSystems_3() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____runSystems_3)); }
	inline EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * get__runSystems_3() const { return ____runSystems_3; }
	inline EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F ** get_address_of__runSystems_3() { return &____runSystems_3; }
	inline void set__runSystems_3(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * value)
	{
		____runSystems_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____runSystems_3), (void*)value);
	}

	inline static int32_t get_offset_of__namedRunSystems_4() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____namedRunSystems_4)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get__namedRunSystems_4() const { return ____namedRunSystems_4; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of__namedRunSystems_4() { return &____namedRunSystems_4; }
	inline void set__namedRunSystems_4(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		____namedRunSystems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____namedRunSystems_4), (void*)value);
	}

	inline static int32_t get_offset_of__injections_5() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____injections_5)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get__injections_5() const { return ____injections_5; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of__injections_5() { return &____injections_5; }
	inline void set__injections_5(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		____injections_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____injections_5), (void*)value);
	}

	inline static int32_t get_offset_of__injected_6() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____injected_6)); }
	inline bool get__injected_6() const { return ____injected_6; }
	inline bool* get_address_of__injected_6() { return &____injected_6; }
	inline void set__injected_6(bool value)
	{
		____injected_6 = value;
	}

	inline static int32_t get_offset_of__initialized_7() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____initialized_7)); }
	inline bool get__initialized_7() const { return ____initialized_7; }
	inline bool* get_address_of__initialized_7() { return &____initialized_7; }
	inline void set__initialized_7(bool value)
	{
		____initialized_7 = value;
	}

	inline static int32_t get_offset_of__destroyed_8() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____destroyed_8)); }
	inline bool get__destroyed_8() const { return ____destroyed_8; }
	inline bool* get_address_of__destroyed_8() { return &____destroyed_8; }
	inline void set__destroyed_8(bool value)
	{
		____destroyed_8 = value;
	}

	inline static int32_t get_offset_of__debugListeners_9() { return static_cast<int32_t>(offsetof(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639, ____debugListeners_9)); }
	inline List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * get__debugListeners_9() const { return ____debugListeners_9; }
	inline List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 ** get_address_of__debugListeners_9() { return &____debugListeners_9; }
	inline void set__debugListeners_9(List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * value)
	{
		____debugListeners_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____debugListeners_9), (void*)value);
	}
};


// Leopotam.Ecs.EcsSystemsRunItem
struct EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C  : public RuntimeObject
{
public:
	// System.Boolean Leopotam.Ecs.EcsSystemsRunItem::Active
	bool ___Active_0;
	// Leopotam.Ecs.IEcsRunSystem Leopotam.Ecs.EcsSystemsRunItem::System
	RuntimeObject* ___System_1;

public:
	inline static int32_t get_offset_of_Active_0() { return static_cast<int32_t>(offsetof(EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C, ___Active_0)); }
	inline bool get_Active_0() const { return ___Active_0; }
	inline bool* get_address_of_Active_0() { return &___Active_0; }
	inline void set_Active_0(bool value)
	{
		___Active_0 = value;
	}

	inline static int32_t get_offset_of_System_1() { return static_cast<int32_t>(offsetof(EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C, ___System_1)); }
	inline RuntimeObject* get_System_1() const { return ___System_1; }
	inline RuntimeObject** get_address_of_System_1() { return &___System_1; }
	inline void set_System_1(RuntimeObject* value)
	{
		___System_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___System_1), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>
struct Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463, ___list_0)); }
	inline List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * get_list_0() const { return ___list_0; }
	inline List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>
struct KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Type_t * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A, ___key_0)); }
	inline Type_t * get_key_0() const { return ___key_0; }
	inline Type_t ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Type_t * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 
{
public:
	// System.Int32 Leopotam.Ecs.EcsEntity::Id
	int32_t ___Id_0;
	// System.UInt16 Leopotam.Ecs.EcsEntity::Gen
	uint16_t ___Gen_1;
	// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsEntity::Owner
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___Owner_2;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Gen_1() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0, ___Gen_1)); }
	inline uint16_t get_Gen_1() const { return ___Gen_1; }
	inline uint16_t* get_address_of_Gen_1() { return &___Gen_1; }
	inline void set_Gen_1(uint16_t value)
	{
		___Gen_1 = value;
	}

	inline static int32_t get_offset_of_Owner_2() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0, ___Owner_2)); }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * get_Owner_2() const { return ___Owner_2; }
	inline EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 ** get_address_of_Owner_2() { return &___Owner_2; }
	inline void set_Owner_2(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * value)
	{
		___Owner_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Owner_2), (void*)value);
	}
};

struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_StaticFields
{
public:
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntity::Null
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___Null_3;

public:
	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_StaticFields, ___Null_3)); }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  get_Null_3() const { return ___Null_3; }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Null_3))->___Owner_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___Owner_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsEntity
struct EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com
{
	int32_t ___Id_0;
	uint16_t ___Gen_1;
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___Owner_2;
};

// Leopotam.Ecs.EcsIgnoreInjectAttribute
struct EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Leopotam.Ecs.EcsWorldConfig
struct EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A 
{
public:
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldEntitiesCacheSize
	int32_t ___WorldEntitiesCacheSize_0;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldFiltersCacheSize
	int32_t ___WorldFiltersCacheSize_1;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::WorldComponentPoolsCacheSize
	int32_t ___WorldComponentPoolsCacheSize_2;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::EntityComponentsCacheSize
	int32_t ___EntityComponentsCacheSize_3;
	// System.Int32 Leopotam.Ecs.EcsWorldConfig::FilterEntitiesCacheSize
	int32_t ___FilterEntitiesCacheSize_4;

public:
	inline static int32_t get_offset_of_WorldEntitiesCacheSize_0() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___WorldEntitiesCacheSize_0)); }
	inline int32_t get_WorldEntitiesCacheSize_0() const { return ___WorldEntitiesCacheSize_0; }
	inline int32_t* get_address_of_WorldEntitiesCacheSize_0() { return &___WorldEntitiesCacheSize_0; }
	inline void set_WorldEntitiesCacheSize_0(int32_t value)
	{
		___WorldEntitiesCacheSize_0 = value;
	}

	inline static int32_t get_offset_of_WorldFiltersCacheSize_1() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___WorldFiltersCacheSize_1)); }
	inline int32_t get_WorldFiltersCacheSize_1() const { return ___WorldFiltersCacheSize_1; }
	inline int32_t* get_address_of_WorldFiltersCacheSize_1() { return &___WorldFiltersCacheSize_1; }
	inline void set_WorldFiltersCacheSize_1(int32_t value)
	{
		___WorldFiltersCacheSize_1 = value;
	}

	inline static int32_t get_offset_of_WorldComponentPoolsCacheSize_2() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___WorldComponentPoolsCacheSize_2)); }
	inline int32_t get_WorldComponentPoolsCacheSize_2() const { return ___WorldComponentPoolsCacheSize_2; }
	inline int32_t* get_address_of_WorldComponentPoolsCacheSize_2() { return &___WorldComponentPoolsCacheSize_2; }
	inline void set_WorldComponentPoolsCacheSize_2(int32_t value)
	{
		___WorldComponentPoolsCacheSize_2 = value;
	}

	inline static int32_t get_offset_of_EntityComponentsCacheSize_3() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___EntityComponentsCacheSize_3)); }
	inline int32_t get_EntityComponentsCacheSize_3() const { return ___EntityComponentsCacheSize_3; }
	inline int32_t* get_address_of_EntityComponentsCacheSize_3() { return &___EntityComponentsCacheSize_3; }
	inline void set_EntityComponentsCacheSize_3(int32_t value)
	{
		___EntityComponentsCacheSize_3 = value;
	}

	inline static int32_t get_offset_of_FilterEntitiesCacheSize_4() { return static_cast<int32_t>(offsetof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A, ___FilterEntitiesCacheSize_4)); }
	inline int32_t get_FilterEntitiesCacheSize_4() const { return ___FilterEntitiesCacheSize_4; }
	inline int32_t* get_address_of_FilterEntitiesCacheSize_4() { return &___FilterEntitiesCacheSize_4; }
	inline void set_FilterEntitiesCacheSize_4(int32_t value)
	{
		___FilterEntitiesCacheSize_4 = value;
	}
};


// Leopotam.Ecs.EcsWorldStats
struct EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC 
{
public:
	// System.Int32 Leopotam.Ecs.EcsWorldStats::ActiveEntities
	int32_t ___ActiveEntities_0;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::ReservedEntities
	int32_t ___ReservedEntities_1;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::Filters
	int32_t ___Filters_2;
	// System.Int32 Leopotam.Ecs.EcsWorldStats::Components
	int32_t ___Components_3;

public:
	inline static int32_t get_offset_of_ActiveEntities_0() { return static_cast<int32_t>(offsetof(EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC, ___ActiveEntities_0)); }
	inline int32_t get_ActiveEntities_0() const { return ___ActiveEntities_0; }
	inline int32_t* get_address_of_ActiveEntities_0() { return &___ActiveEntities_0; }
	inline void set_ActiveEntities_0(int32_t value)
	{
		___ActiveEntities_0 = value;
	}

	inline static int32_t get_offset_of_ReservedEntities_1() { return static_cast<int32_t>(offsetof(EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC, ___ReservedEntities_1)); }
	inline int32_t get_ReservedEntities_1() const { return ___ReservedEntities_1; }
	inline int32_t* get_address_of_ReservedEntities_1() { return &___ReservedEntities_1; }
	inline void set_ReservedEntities_1(int32_t value)
	{
		___ReservedEntities_1 = value;
	}

	inline static int32_t get_offset_of_Filters_2() { return static_cast<int32_t>(offsetof(EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC, ___Filters_2)); }
	inline int32_t get_Filters_2() const { return ___Filters_2; }
	inline int32_t* get_address_of_Filters_2() { return &___Filters_2; }
	inline void set_Filters_2(int32_t value)
	{
		___Filters_2 = value;
	}

	inline static int32_t get_offset_of_Components_3() { return static_cast<int32_t>(offsetof(EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC, ___Components_3)); }
	inline int32_t get_Components_3() const { return ___Components_3; }
	inline int32_t* get_address_of_Components_3() { return &___Components_3; }
	inline void set_Components_3(int32_t value)
	{
		___Components_3 = value;
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_t7C31CBFB035DA412880D90BEFBFE980E92E7B12C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t3188C6BF743FDB986678BFFC5F540708B12FBFD2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C 
{
public:
	// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsFilter/Enumerator::_filter
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ____filter_0;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_count
	int32_t ____count_1;
	// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::_idx
	int32_t ____idx_2;

public:
	inline static int32_t get_offset_of__filter_0() { return static_cast<int32_t>(offsetof(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C, ____filter_0)); }
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * get__filter_0() const { return ____filter_0; }
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 ** get_address_of__filter_0() { return &____filter_0; }
	inline void set__filter_0(EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * value)
	{
		____filter_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____filter_0), (void*)value);
	}

	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__idx_2() { return static_cast<int32_t>(offsetof(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C, ____idx_2)); }
	inline int32_t get__idx_2() const { return ____idx_2; }
	inline int32_t* get_address_of__idx_2() { return &____idx_2; }
	inline void set__idx_2(int32_t value)
	{
		____idx_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke
{
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/Enumerator
struct Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com
{
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ____filter_0;
	int32_t ____count_1;
	int32_t ____idx_2;
};

// Leopotam.Ecs.EcsWorld/EcsEntityData
struct EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 
{
public:
	// System.UInt16 Leopotam.Ecs.EcsWorld/EcsEntityData::Gen
	uint16_t ___Gen_0;
	// System.Int16 Leopotam.Ecs.EcsWorld/EcsEntityData::ComponentsCountX2
	int16_t ___ComponentsCountX2_1;
	// System.Int32[] Leopotam.Ecs.EcsWorld/EcsEntityData::Components
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Components_2;

public:
	inline static int32_t get_offset_of_Gen_0() { return static_cast<int32_t>(offsetof(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3, ___Gen_0)); }
	inline uint16_t get_Gen_0() const { return ___Gen_0; }
	inline uint16_t* get_address_of_Gen_0() { return &___Gen_0; }
	inline void set_Gen_0(uint16_t value)
	{
		___Gen_0 = value;
	}

	inline static int32_t get_offset_of_ComponentsCountX2_1() { return static_cast<int32_t>(offsetof(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3, ___ComponentsCountX2_1)); }
	inline int16_t get_ComponentsCountX2_1() const { return ___ComponentsCountX2_1; }
	inline int16_t* get_address_of_ComponentsCountX2_1() { return &___ComponentsCountX2_1; }
	inline void set_ComponentsCountX2_1(int16_t value)
	{
		___ComponentsCountX2_1 = value;
	}

	inline static int32_t get_offset_of_Components_2() { return static_cast<int32_t>(offsetof(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3, ___Components_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_Components_2() const { return ___Components_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_Components_2() { return &___Components_2; }
	inline void set_Components_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___Components_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Components_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)
// Native definition for COM marshalling of Leopotam.Ecs.EcsWorld/EcsEntityData
#pragma pack(push, tp, 2)
struct EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com
{
	uint16_t ___Gen_0;
	int16_t ___ComponentsCountX2_1;
	Il2CppSafeArray/*NONE*/* ___Components_2;
};
#pragma pack(pop, tp)

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>
struct Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___dictionary_0)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___current_3)); }
	inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Leopotam.Ecs.EcsWorld
struct EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19  : public RuntimeObject
{
public:
	// Leopotam.Ecs.EcsWorld/EcsEntityData[] Leopotam.Ecs.EcsWorld::Entities
	EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* ___Entities_0;
	// System.Int32 Leopotam.Ecs.EcsWorld::EntitiesCount
	int32_t ___EntitiesCount_1;
	// Leopotam.Ecs.EcsGrowList`1<System.Int32> Leopotam.Ecs.EcsWorld::FreeEntities
	EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * ___FreeEntities_2;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter> Leopotam.Ecs.EcsWorld::Filters
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * ___Filters_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByIncludedComponents
	Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * ___FilterByIncludedComponents_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>> Leopotam.Ecs.EcsWorld::FilterByExcludedComponents
	Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * ___FilterByExcludedComponents_5;
	// System.Int32 Leopotam.Ecs.EcsWorld::_usedComponentsCount
	int32_t ____usedComponentsCount_6;
	// Leopotam.Ecs.EcsWorldConfig Leopotam.Ecs.EcsWorld::Config
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  ___Config_7;
	// System.Object[] Leopotam.Ecs.EcsWorld::_filterCtor
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____filterCtor_8;
	// Leopotam.Ecs.IEcsComponentPool[] Leopotam.Ecs.EcsWorld::ComponentPools
	IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* ___ComponentPools_9;
	// System.Boolean Leopotam.Ecs.EcsWorld::IsDestroyed
	bool ___IsDestroyed_10;
	// System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener> Leopotam.Ecs.EcsWorld::DebugListeners
	List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * ___DebugListeners_11;
	// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity> Leopotam.Ecs.EcsWorld::_leakedEntities
	EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * ____leakedEntities_12;
	// System.Boolean Leopotam.Ecs.EcsWorld::_inDestroying
	bool ____inDestroying_13;

public:
	inline static int32_t get_offset_of_Entities_0() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___Entities_0)); }
	inline EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* get_Entities_0() const { return ___Entities_0; }
	inline EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** get_address_of_Entities_0() { return &___Entities_0; }
	inline void set_Entities_0(EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* value)
	{
		___Entities_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Entities_0), (void*)value);
	}

	inline static int32_t get_offset_of_EntitiesCount_1() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___EntitiesCount_1)); }
	inline int32_t get_EntitiesCount_1() const { return ___EntitiesCount_1; }
	inline int32_t* get_address_of_EntitiesCount_1() { return &___EntitiesCount_1; }
	inline void set_EntitiesCount_1(int32_t value)
	{
		___EntitiesCount_1 = value;
	}

	inline static int32_t get_offset_of_FreeEntities_2() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___FreeEntities_2)); }
	inline EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * get_FreeEntities_2() const { return ___FreeEntities_2; }
	inline EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A ** get_address_of_FreeEntities_2() { return &___FreeEntities_2; }
	inline void set_FreeEntities_2(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * value)
	{
		___FreeEntities_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FreeEntities_2), (void*)value);
	}

	inline static int32_t get_offset_of_Filters_3() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___Filters_3)); }
	inline EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * get_Filters_3() const { return ___Filters_3; }
	inline EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 ** get_address_of_Filters_3() { return &___Filters_3; }
	inline void set_Filters_3(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * value)
	{
		___Filters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Filters_3), (void*)value);
	}

	inline static int32_t get_offset_of_FilterByIncludedComponents_4() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___FilterByIncludedComponents_4)); }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * get_FilterByIncludedComponents_4() const { return ___FilterByIncludedComponents_4; }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 ** get_address_of_FilterByIncludedComponents_4() { return &___FilterByIncludedComponents_4; }
	inline void set_FilterByIncludedComponents_4(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * value)
	{
		___FilterByIncludedComponents_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterByIncludedComponents_4), (void*)value);
	}

	inline static int32_t get_offset_of_FilterByExcludedComponents_5() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___FilterByExcludedComponents_5)); }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * get_FilterByExcludedComponents_5() const { return ___FilterByExcludedComponents_5; }
	inline Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 ** get_address_of_FilterByExcludedComponents_5() { return &___FilterByExcludedComponents_5; }
	inline void set_FilterByExcludedComponents_5(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * value)
	{
		___FilterByExcludedComponents_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterByExcludedComponents_5), (void*)value);
	}

	inline static int32_t get_offset_of__usedComponentsCount_6() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ____usedComponentsCount_6)); }
	inline int32_t get__usedComponentsCount_6() const { return ____usedComponentsCount_6; }
	inline int32_t* get_address_of__usedComponentsCount_6() { return &____usedComponentsCount_6; }
	inline void set__usedComponentsCount_6(int32_t value)
	{
		____usedComponentsCount_6 = value;
	}

	inline static int32_t get_offset_of_Config_7() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___Config_7)); }
	inline EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  get_Config_7() const { return ___Config_7; }
	inline EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * get_address_of_Config_7() { return &___Config_7; }
	inline void set_Config_7(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  value)
	{
		___Config_7 = value;
	}

	inline static int32_t get_offset_of__filterCtor_8() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ____filterCtor_8)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__filterCtor_8() const { return ____filterCtor_8; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__filterCtor_8() { return &____filterCtor_8; }
	inline void set__filterCtor_8(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____filterCtor_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____filterCtor_8), (void*)value);
	}

	inline static int32_t get_offset_of_ComponentPools_9() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___ComponentPools_9)); }
	inline IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* get_ComponentPools_9() const { return ___ComponentPools_9; }
	inline IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1** get_address_of_ComponentPools_9() { return &___ComponentPools_9; }
	inline void set_ComponentPools_9(IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* value)
	{
		___ComponentPools_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ComponentPools_9), (void*)value);
	}

	inline static int32_t get_offset_of_IsDestroyed_10() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___IsDestroyed_10)); }
	inline bool get_IsDestroyed_10() const { return ___IsDestroyed_10; }
	inline bool* get_address_of_IsDestroyed_10() { return &___IsDestroyed_10; }
	inline void set_IsDestroyed_10(bool value)
	{
		___IsDestroyed_10 = value;
	}

	inline static int32_t get_offset_of_DebugListeners_11() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ___DebugListeners_11)); }
	inline List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * get_DebugListeners_11() const { return ___DebugListeners_11; }
	inline List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E ** get_address_of_DebugListeners_11() { return &___DebugListeners_11; }
	inline void set_DebugListeners_11(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * value)
	{
		___DebugListeners_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugListeners_11), (void*)value);
	}

	inline static int32_t get_offset_of__leakedEntities_12() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ____leakedEntities_12)); }
	inline EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * get__leakedEntities_12() const { return ____leakedEntities_12; }
	inline EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F ** get_address_of__leakedEntities_12() { return &____leakedEntities_12; }
	inline void set__leakedEntities_12(EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * value)
	{
		____leakedEntities_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____leakedEntities_12), (void*)value);
	}

	inline static int32_t get_offset_of__inDestroying_13() { return static_cast<int32_t>(offsetof(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19, ____inDestroying_13)); }
	inline bool get__inDestroying_13() const { return ____inDestroying_13; }
	inline bool* get_address_of__inDestroying_13() { return &____inDestroying_13; }
	inline void set__inDestroying_13(bool value)
	{
		____inDestroying_13 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.IL2CPP.CompilerServices.Option
struct Option_t84009B1FD679878627B1F10A085F14353CEC0845 
{
public:
	// System.Int32 Unity.IL2CPP.CompilerServices.Option::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Option_t84009B1FD679878627B1F10A085F14353CEC0845, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 
{
public:
	// System.Boolean Leopotam.Ecs.EcsFilter/DelayedOp::IsAdd
	bool ___IsAdd_0;
	// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsFilter/DelayedOp::Entity
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___Entity_1;

public:
	inline static int32_t get_offset_of_IsAdd_0() { return static_cast<int32_t>(offsetof(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812, ___IsAdd_0)); }
	inline bool get_IsAdd_0() const { return ___IsAdd_0; }
	inline bool* get_address_of_IsAdd_0() { return &___IsAdd_0; }
	inline void set_IsAdd_0(bool value)
	{
		___IsAdd_0 = value;
	}

	inline static int32_t get_offset_of_Entity_1() { return static_cast<int32_t>(offsetof(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812, ___Entity_1)); }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  get_Entity_1() const { return ___Entity_1; }
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * get_address_of_Entity_1() { return &___Entity_1; }
	inline void set_Entity_1(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		___Entity_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___Entity_1))->___Owner_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke
{
	int32_t ___IsAdd_0;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke ___Entity_1;
};
// Native definition for COM marshalling of Leopotam.Ecs.EcsFilter/DelayedOp
struct DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com
{
	int32_t ___IsAdd_0;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com ___Entity_1;
};

// Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute
struct Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Option>k__BackingField
	int32_t ___U3COptionU3Ek__BackingField_0;
	// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::<Value>k__BackingField
	RuntimeObject * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3COptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445, ___U3COptionU3Ek__BackingField_0)); }
	inline int32_t get_U3COptionU3Ek__BackingField_0() const { return ___U3COptionU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3COptionU3Ek__BackingField_0() { return &___U3COptionU3Ek__BackingField_0; }
	inline void set_U3COptionU3Ek__BackingField_0(int32_t value)
	{
		___U3COptionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445, ___U3CValueU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueU3Ek__BackingField_1), (void*)value);
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Leopotam.Ecs.IEcsComponentPool[]
struct IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.Ecs.EcsEntity[]
struct EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  m_Items[1];

public:
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsFilter/DelayedOp[]
struct DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  m_Items[1];

public:
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___Entity_1))->___Owner_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsSystemsRunItem[]
struct EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * m_Items[1];

public:
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.Ecs.IEcsSystem[]
struct IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Leopotam.Ecs.EcsWorld/EcsEntityData[]
struct EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  m_Items[1];

public:
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
	}
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Components_2), (void*)NULL);
	}
};
// Leopotam.Ecs.EcsFilter[]
struct EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * m_Items[1];

public:
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};

IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled);
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled);

// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_gshared (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8_gshared (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_gshared (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_gshared_inline (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_gshared (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_gshared_inline (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentValues(Leopotam.Ecs.EcsEntity&,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentValues_m49F8E2850DC3B33CD8BBAAA4AD16BD605D60F13B (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___list1, const RuntimeMethod* method);
// System.Object[] Leopotam.Ecs.EcsEntity::get_Components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* EcsEntity_get_Components_m682F42E5B6BFE85324A167145F466092025A7D4B (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method);
// System.Int32 System.UInt16::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA (uint16_t* __this, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___other0, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsNull(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsNull_m030A5B4C42B6B884C8DC76841BF6751D8FB01A36_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentTypes(Leopotam.Ecs.EcsEntity&,System.Type[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentTypes_m514CE84BF6B20945875143B6837A11AE47760555 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** ___list1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.String Leopotam.Ecs.EcsEntity::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EcsEntity_ToString_mE2251D8DA582DA5E766AAEE77A203FF678A06C6D (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___typeIdx0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::get_Count()
inline int32_t List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreEquals_mAE4FBAF8A9B3947C16DFE6825609F26E577705FD_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Int32>(!!0[]&,System.Int32)
inline void Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**, int32_t, const RuntimeMethod*))Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___id0, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData1, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method);
// System.Void System.Array::Resize<Leopotam.Ecs.EcsFilter/DelayedOp>(!!0[]&,System.Int32)
inline void Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2**, int32_t, const RuntimeMethod*))Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_gshared)(___array0, ___newSize1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Int32>(!!0[],!!0)
inline int32_t Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8 (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___array0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8_gshared)(___array0, ___value1, method);
}
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::Add(!0)
inline void List_1_Add_mC60BEFA252C2C26B7BF67F8218834090C2956B40 (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::Remove(!0)
inline bool List_1_Remove_mFB35EBBAFBFE02C3EF85A6568C0E04169FC81D8D (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 *, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_inline (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_inline (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mBD7199657787018123B7B8F2B048B503D484C097_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::.ctor(System.Int32)
inline void List_1__ctor_m523AA645DFA1BD8ADF220B73101ACF88FD09405E (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem>::Add(T)
inline void EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_inline (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 *, RuntimeObject*, const RuntimeMethod*))EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Leopotam.Ecs.EcsSystemsRunItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5846EA79A00CF9DB479DB3B43ED8BF75574A0152 (EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem>::Add(T)
inline void EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_inline (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * __this, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F *, EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C *, const RuntimeMethod*))EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026 (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * __this, int32_t ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *, int32_t, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Type,System.Object>::GetEnumerator()
inline Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::get_Current()
inline KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_inline (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  (*) (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Key()
inline Type_t * KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Type,System.Object>::get_Value()
inline RuntimeObject * KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_inline (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985 (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Object>::Dispose()
inline void Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515 (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsSystems::InjectDataToSystem(Leopotam.Ecs.IEcsSystem,Leopotam.Ecs.EcsWorld,System.Collections.Generic.Dictionary`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688 (RuntimeObject* ___system0, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world1, Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___injections2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsWorld::CheckForLeakedEntities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, String_t* ___errorMsg0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::get_Count()
inline int32_t List_1_get_Count_mFEA474E0031887519BF6C609D948C4032DBA7719_inline (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<Leopotam.Ecs.IEcsSystemsDebugListener>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m4CBE152E035FD37F272E4F1AF7243136FA4F73FC_inline (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Attribute_IsDefined_mD3B7688B216A0B4EBD238B82E9E8DA0E0E9308CB (MemberInfo_t * ___element0, Type_t * ___attributeType1, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, Type_t * ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::.ctor(System.Int32)
inline void List_1__ctor_m8912F67D79EA3CD43A4CDFE9C1A42130A9C93A9F (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_inline (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_gshared_inline)(__this, ___capacity0, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::.ctor(System.Int32)
inline void EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *, int32_t, const RuntimeMethod*))EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35 (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mC005492A35FF3810936B20F0D2CB95C92703DD39_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::Add(!0)
inline void List_1_Add_mCF11A73514FD51E426C6ADD1356E602779D883C7 (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::Remove(!0)
inline bool List_1_Remove_mD8752D6D268BFED6016DC80D946A869ED0B6D9E1 (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E *, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void System.Array::Resize<Leopotam.Ecs.EcsWorld/EcsEntityData>(!!0[]&,System.Int32)
inline void Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14 (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8**, int32_t, const RuntimeMethod*))Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_gshared)(___array0, ___newSize1, method);
}
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsEntity>::Add(T)
inline void EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_inline (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F *, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 , const RuntimeMethod*))EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Leopotam.Ecs.IEcsWorldDebugListener>::GetEnumerator()
inline Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33 (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  (*) (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_inline (Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>::MoveNext()
inline bool Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34 (Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Leopotam.Ecs.IEcsWorldDebugListener>::Dispose()
inline void Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5 (Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mBA776E4823B408DC61E91344D8CF20861F03B8A6 (Type_t * ___type0, int32_t ___bindingAttr1, Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___binder2, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args3, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture4, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsFilter::AreComponentsSame(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AreComponentsSame_m104DC79D548547DCA83C47DB4A1C0A13CA06E444 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>::Add(T)
inline void EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 *, const RuntimeMethod*))EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06 (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * __this, int32_t ___key0, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *, int32_t, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsFilter>>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95 (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * __this, int32_t ___key0, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *, int32_t, EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsGrowList`1<System.Int32>::Add(T)
inline void EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A *, int32_t, const RuntimeMethod*))EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_gshared_inline)(__this, ___item0, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::GetInternalEntitiesMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalId(Leopotam.Ecs.EcsEntity&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method);
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method);
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method);
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method);
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.Ecs.EcsComponentPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsComponentPool__ctor_m6A78CD1C1DFF1A48BCFC6CC832D906FC1F85B847 (EcsComponentPool_t8AB887AF33A28010330912038F77500B5724D98C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_pinvoke_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_back(const EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0& unmarshaled)
{
	Exception_t* ___Owner_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Owner' of type 'EcsEntity': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Owner_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsEntity
IL2CPP_EXTERN_C void EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshal_com_cleanup(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_marshaled_com& marshaled)
{
}
// System.Object[] Leopotam.Ecs.EcsEntity::get_Components()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* EcsEntity_get_Components_m682F42E5B6BFE85324A167145F466092025A7D4B (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	{
		// object[] list = null;
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
		// if (this.IsAlive ()) {
		bool L_0;
		L_0 = EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, /*hidden argument*/NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// this.GetComponentValues (ref list);
		int32_t L_2;
		L_2 = EcsEntityExtensions_GetComponentValues_m49F8E2850DC3B33CD8BBAAA4AD16BD605D60F13B((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)(&V_0), /*hidden argument*/NULL);
	}

IL_0018:
	{
		// return list;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = V_0;
		V_2 = L_3;
		goto IL_001c;
	}

IL_001c:
	{
		// }
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_2;
		return L_4;
	}
}
IL2CPP_EXTERN_C  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* EcsEntity_get_Components_m682F42E5B6BFE85324A167145F466092025A7D4B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* _returnValue;
	_returnValue = EcsEntity_get_Components_m682F42E5B6BFE85324A167145F466092025A7D4B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Equality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Equality_m436A7FB75CF778C672FB0F0C23708E1113B0B27B (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___lhs0;
		int32_t L_1 = L_0->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___rhs1;
		int32_t L_3 = L_2->get_Id_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___lhs0;
		uint16_t L_5 = L_4->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___rhs1;
		uint16_t L_7 = L_6->get_Gen_1();
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntity::op_Inequality(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_op_Inequality_m1A7AD9E8039DD4E1703B7A295639DFA00A70CBB3 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id != rhs.Id || lhs.Gen != rhs.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___lhs0;
		int32_t L_1 = L_0->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___rhs1;
		int32_t L_3 = L_2->get_Id_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0022;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___lhs0;
		uint16_t L_5 = L_4->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___rhs1;
		uint16_t L_7 = L_6->get_Gen_1();
		G_B3_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 1;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntity::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->get_Id_0();
		uint16_t* L_1 = __this->get_address_of_Gen_1();
		int32_t L_2;
		L_2 = UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA((uint16_t*)L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_2));
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		int32_t L_3 = V_0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_4 = __this->get_Owner_2();
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)397)));
		if (L_4)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)397)));
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0038;
	}

IL_002d:
	{
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_5 = __this->get_Owner_2();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0038:
	{
		V_0 = ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
		// return hashCode;
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = ((*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)UnBox(L_1, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var))));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_inline(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.String Leopotam.Ecs.EcsEntity::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EcsEntity_ToString_mE2251D8DA582DA5E766AAEE77A203FF678A06C6D (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral149412EF5DD4FABC7521825E523B524E1EB45E71);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46E688EE9CEA12647607134D9F4CFBDE2F065AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFD0582341B5BB3B305762DA13B0072CAE573CFB);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	bool V_4 = false;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_5 = NULL;
	int32_t V_6 = 0;
	Type_t * V_7 = NULL;
	bool V_8 = false;
	{
		// if (this.IsNull ()) { return "Entity-Null"; }
		bool L_0;
		L_0 = EcsEntityExtensions_IsNull_m030A5B4C42B6B884C8DC76841BF6751D8FB01A36_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, /*hidden argument*/NULL);
		V_2 = L_0;
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (this.IsNull ()) { return "Entity-Null"; }
		V_3 = _stringLiteral149412EF5DD4FABC7521825E523B524E1EB45E71;
		goto IL_00b7;
	}

IL_0017:
	{
		// if (!this.IsAlive ()) { return "Entity-NonAlive"; }
		bool L_2;
		L_2 = EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// if (!this.IsAlive ()) { return "Entity-NonAlive"; }
		V_3 = _stringLiteralEFD0582341B5BB3B305762DA13B0072CAE573CFB;
		goto IL_00b7;
	}

IL_0032:
	{
		// Type[] types = null;
		V_0 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)NULL;
		// this.GetComponentTypes (ref types);
		int32_t L_4;
		L_4 = EcsEntityExtensions_GetComponentTypes_m514CE84BF6B20945875143B6837A11AE47760555((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755**)(&V_0), /*hidden argument*/NULL);
		// var sb = new System.Text.StringBuilder (512);
		StringBuilder_t * L_5 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_5, ((int32_t)512), /*hidden argument*/NULL);
		V_1 = L_5;
		// foreach (var type in types) {
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_6 = V_0;
		V_5 = L_6;
		V_6 = 0;
		goto IL_008b;
	}

IL_0051:
	{
		// foreach (var type in types) {
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_7 = V_5;
		int32_t L_8 = V_6;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Type_t * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_7 = L_10;
		// if (sb.Length > 0) { sb.Append (","); }
		StringBuilder_t * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_11, /*hidden argument*/NULL);
		V_8 = (bool)((((int32_t)L_12) > ((int32_t)0))? 1 : 0);
		bool L_13 = V_8;
		if (!L_13)
		{
			goto IL_0076;
		}
	}
	{
		// if (sb.Length > 0) { sb.Append (","); }
		StringBuilder_t * L_14 = V_1;
		NullCheck(L_14);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_14, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// sb.Append (type.Name);
		StringBuilder_t * L_16 = V_1;
		Type_t * L_17 = V_7;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_17);
		NullCheck(L_16);
		StringBuilder_t * L_19;
		L_19 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1(L_16, L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_008b:
	{
		// foreach (var type in types) {
		int32_t L_21 = V_6;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_22 = V_5;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))))))
		{
			goto IL_0051;
		}
	}
	{
		// return $"Entity-{Id}:{Gen} [{sb}]";
		int32_t L_23 = __this->get_Id_0();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		uint16_t L_26 = __this->get_Gen_1();
		uint16_t L_27 = L_26;
		RuntimeObject * L_28 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_27);
		StringBuilder_t * L_29 = V_1;
		String_t* L_30;
		L_30 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteral46E688EE9CEA12647607134D9F4CFBDE2F065AF2, L_25, L_28, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		goto IL_00b7;
	}

IL_00b7:
	{
		// }
		String_t* L_31 = V_3;
		return L_31;
	}
}
IL2CPP_EXTERN_C  String_t* EcsEntity_ToString_mE2251D8DA582DA5E766AAEE77A203FF678A06C6D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = EcsEntity_ToString_mE2251D8DA582DA5E766AAEE77A203FF678A06C6D(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Leopotam.Ecs.EcsEntity::Equals(Leopotam.Ecs.EcsEntity)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return Id == other.Id && Gen == other.Gen && Owner == other.Owner;
		int32_t L_0 = __this->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_1 = ___other0;
		int32_t L_2 = L_1.get_Id_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		uint16_t L_3 = __this->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_4 = ___other0;
		uint16_t L_5 = L_4.get_Gen_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_6 = __this->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_7 = ___other0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_8 = L_7.get_Owner_2();
		G_B4_0 = ((((RuntimeObject*)(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_6) == ((RuntimeObject*)(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_EXTERN_C  bool EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF_AdjustorThunk (RuntimeObject * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * _thisAdjusted = reinterpret_cast<EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *>(__this + _offset);
	bool _returnValue;
	_returnValue = EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Void Leopotam.Ecs.EcsEntity::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntity__cctor_mA106917B4E246EC6C8C30CE586D3527DBDDA8E7F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly EcsEntity Null = new EcsEntity ();
		il2cpp_codegen_initobj((((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_StaticFields*)il2cpp_codegen_static_fields_for(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var))->get_address_of_Null_3()), sizeof(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 ));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsEntityExtensions::Copy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsEntityExtensions_Copy_m6B749A1560FFACF793181203CC660A03A01D3F65 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * V_0 = NULL;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_1 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	bool V_14 = false;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_15;
	memset((&V_15), 0, sizeof(V_15));
	{
		// var owner = entity.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		V_0 = L_1;
		// if (owner == null) { throw new Exception ("Cant copy invalid entity."); }
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_2 = V_0;
		V_4 = (bool)((((RuntimeObject*)(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_2) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// if (owner == null) { throw new Exception ("Cant copy invalid entity."); }
		Exception_t * L_4 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral432B630D178FA64EAD79FE90B66545CC0E025765)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Copy_m6B749A1560FFACF793181203CC660A03A01D3F65_RuntimeMethod_var)));
	}

IL_001e:
	{
		// ref var srcData = ref owner.GetEntityData (entity);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_5 = V_0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7;
		L_7 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_5, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_6, /*hidden argument*/NULL);
		V_1 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_7;
		// if (srcData.Gen != entity.Gen) { throw new Exception ("Cant copy destroyed entity."); }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_8 = V_1;
		uint16_t L_9 = L_8->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_10 = ___entity0;
		uint16_t L_11 = L_10->get_Gen_1();
		V_5 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// if (srcData.Gen != entity.Gen) { throw new Exception ("Cant copy destroyed entity."); }
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral457FC7B96A28919D20AEDC09CA3CDC4CC21B0D13)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Copy_m6B749A1560FFACF793181203CC660A03A01D3F65_RuntimeMethod_var)));
	}

IL_0049:
	{
		// var dstEntity = owner.NewEntity ();
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_14 = V_0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_15;
		L_15 = EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_inline(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// ref var dstData = ref owner.GetEntityData (dstEntity);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_16 = V_0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_17;
		L_17 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_16, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_2), /*hidden argument*/NULL);
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_17;
		// if (dstData.Components.Length < srcData.ComponentsCountX2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_18 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = L_18->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_20 = V_1;
		int16_t L_21 = L_20->get_ComponentsCountX2_1();
		V_6 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_6;
		if (!L_22)
		{
			goto IL_0084;
		}
	}
	{
		// dstData.Components = new int[srcData.Components.Length];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_23 = V_3;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_24 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = L_24->get_Components_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))));
		L_23->set_Components_2(L_26);
	}

IL_0084:
	{
		// dstData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_27 = V_3;
		L_27->set_ComponentsCountX2_1((int16_t)0);
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		V_7 = 0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_28 = V_1;
		int16_t L_29 = L_28->get_ComponentsCountX2_1();
		V_8 = L_29;
		goto IL_0104;
	}

IL_0098:
	{
		// var typeIdx = srcData.Components[i];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_30 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = L_30->get_Components_2();
		int32_t L_32 = V_7;
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		V_9 = L_34;
		// var pool = owner.ComponentPools[typeIdx];
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_35 = V_0;
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_36 = L_35->get_ComponentPools_9();
		int32_t L_37 = V_9;
		int32_t L_38 = L_37;
		RuntimeObject* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		V_10 = L_39;
		// var dstItemIdx = pool.New ();
		RuntimeObject* L_40 = V_10;
		int32_t L_41;
		L_41 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Leopotam.Ecs.IEcsComponentPool::New() */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_40);
		V_11 = L_41;
		// dstData.Components[i] = typeIdx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_42 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_43 = L_42->get_Components_2();
		int32_t L_44 = V_7;
		int32_t L_45 = V_9;
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44), (int32_t)L_45);
		// dstData.Components[i + 1] = dstItemIdx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_46 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_47 = L_46->get_Components_2();
		int32_t L_48 = V_7;
		int32_t L_49 = V_11;
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1))), (int32_t)L_49);
		// pool.CopyData (srcData.Components[i + 1], dstItemIdx);
		RuntimeObject* L_50 = V_10;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_51 = V_1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_52 = L_51->get_Components_2();
		int32_t L_53 = V_7;
		int32_t L_54 = ((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1));
		int32_t L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_11;
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_50, L_55, L_56);
		// dstData.ComponentsCountX2 += 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_57 = V_3;
		int16_t* L_58 = L_57->get_address_of_ComponentsCountX2_1();
		int16_t* L_59 = L_58;
		int32_t L_60 = *((int16_t*)L_59);
		*((int16_t*)L_59) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)2))));
		// owner.UpdateFilters (typeIdx, dstEntity, dstData);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_61 = V_0;
		int32_t L_62 = V_9;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_63 = V_3;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline(L_61, L_62, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_2), (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_63, /*hidden argument*/NULL);
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_64 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)2));
	}

IL_0104:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_65 = V_7;
		int32_t L_66 = V_8;
		V_12 = (bool)((((int32_t)L_65) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_12;
		if (L_67)
		{
			goto IL_0098;
		}
	}
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		V_13 = 0;
		goto IL_0136;
	}

IL_0115:
	{
		// owner.DebugListeners[ii].OnComponentListChanged (entity);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_68 = V_0;
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_69 = L_68->get_DebugListeners_11();
		int32_t L_70 = V_13;
		RuntimeObject* L_71;
		L_71 = List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline(L_69, L_70, /*hidden argument*/List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_72 = ___entity0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_73 = (*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_72);
		InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_71, L_73);
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_74 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_0136:
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_75 = V_13;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_76 = V_0;
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_77 = L_76->get_DebugListeners_11();
		int32_t L_78;
		L_78 = List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline(L_77, /*hidden argument*/List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		V_14 = (bool)((((int32_t)L_75) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_14;
		if (L_79)
		{
			goto IL_0115;
		}
	}
	{
		// return dstEntity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_80 = V_2;
		V_15 = L_80;
		goto IL_0150;
	}

IL_0150:
	{
		// }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_81 = V_15;
		return L_81;
	}
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::MoveTo(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntityExtensions_MoveTo_m8DA49EDCF3BC885122BFEC81C71D8A7B58A00E1C (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___source0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___target1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * V_1 = NULL;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_2 = NULL;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	RuntimeObject* V_12 = NULL;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t V_17 = 0;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	bool V_22 = false;
	{
		// if (!source.IsAlive ()) { throw new Exception ("Cant move from invalid entity."); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___source0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_0, /*hidden argument*/NULL);
		V_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (!source.IsAlive ()) { throw new Exception ("Cant move from invalid entity."); }
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEF755D2E5400B69B5641D660ED14A00DA630865)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_m8DA49EDCF3BC885122BFEC81C71D8A7B58A00E1C_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (!target.IsAlive ()) { throw new Exception ("Cant move to invalid entity."); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___target1;
		bool L_5;
		L_5 = EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_4, /*hidden argument*/NULL);
		V_5 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_5;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// if (!target.IsAlive ()) { throw new Exception ("Cant move to invalid entity."); }
		Exception_t * L_7 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A6FDF288A824FB48440B5D0C92A42043315A3AD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_m8DA49EDCF3BC885122BFEC81C71D8A7B58A00E1C_RuntimeMethod_var)));
	}

IL_0037:
	{
		// if (source.Owner != target.Owner) { throw new Exception ("Cant move data between worlds."); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_8 = ___source0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_9 = L_8->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_10 = ___target1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_11 = L_10->get_Owner_2();
		V_6 = (bool)((((int32_t)((((RuntimeObject*)(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_9) == ((RuntimeObject*)(EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 *)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_005a;
		}
	}
	{
		// if (source.Owner != target.Owner) { throw new Exception ("Cant move data between worlds."); }
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA9A6DF0DA0A3492705FE14C392B46B40246A923F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_m8DA49EDCF3BC885122BFEC81C71D8A7B58A00E1C_RuntimeMethod_var)));
	}

IL_005a:
	{
		// if (source.AreEquals (target)) { throw new Exception ("Source and target entities are same."); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_14 = ___source0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_15 = ___target1;
		bool L_16;
		L_16 = EcsEntityExtensions_AreEquals_mAE4FBAF8A9B3947C16DFE6825609F26E577705FD_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_14, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_15, /*hidden argument*/NULL);
		V_7 = L_16;
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0073;
		}
	}
	{
		// if (source.AreEquals (target)) { throw new Exception ("Source and target entities are same."); }
		Exception_t * L_18 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF36C572D06C6253E318E68863ED100E5A2FBA478)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_MoveTo_m8DA49EDCF3BC885122BFEC81C71D8A7B58A00E1C_RuntimeMethod_var)));
	}

IL_0073:
	{
		// var componentsListChanged = false;
		V_0 = (bool)0;
		// var owner = source.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_19 = ___source0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_20 = L_19->get_Owner_2();
		V_1 = L_20;
		// ref var srcData = ref owner.GetEntityData (source);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_21 = V_1;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_22 = ___source0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_23;
		L_23 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_21, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_22, /*hidden argument*/NULL);
		V_2 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_23;
		// ref var dstData = ref owner.GetEntityData (target);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_24 = V_1;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_25 = ___target1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_26;
		L_26 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_24, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_25, /*hidden argument*/NULL);
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_26;
		// if (dstData.Components.Length < srcData.ComponentsCountX2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_27 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = L_27->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_29 = V_2;
		int16_t L_30 = L_29->get_ComponentsCountX2_1();
		V_8 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))) < ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00b7;
		}
	}
	{
		// dstData.Components = new int[srcData.Components.Length];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = V_3;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_33 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = L_33->get_Components_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))));
		L_32->set_Components_2(L_35);
	}

IL_00b7:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		V_9 = 0;
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_2;
		int16_t L_37 = L_36->get_ComponentsCountX2_1();
		V_10 = L_37;
		goto IL_01d5;
	}

IL_00c7:
	{
		// var typeIdx = srcData.Components[i];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_38 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = L_38->get_Components_2();
		int32_t L_40 = V_9;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_11 = L_42;
		// var pool = owner.ComponentPools[typeIdx];
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_43 = V_1;
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_44 = L_43->get_ComponentPools_9();
		int32_t L_45 = V_11;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = (L_44)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_46));
		V_12 = L_47;
		// var j = dstData.ComponentsCountX2 - 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_48 = V_3;
		int16_t L_49 = L_48->get_ComponentsCountX2_1();
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)2));
		goto IL_0108;
	}

IL_00ea:
	{
		// if (dstData.Components[j] == typeIdx) { break; }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_50 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_51 = L_50->get_Components_2();
		int32_t L_52 = V_13;
		int32_t L_53 = L_52;
		int32_t L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		int32_t L_55 = V_11;
		V_14 = (bool)((((int32_t)L_54) == ((int32_t)L_55))? 1 : 0);
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0101;
		}
	}
	{
		// if (dstData.Components[j] == typeIdx) { break; }
		goto IL_0116;
	}

IL_0101:
	{
		// for (; j >= 0; j -= 2) {
		int32_t L_57 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_57, (int32_t)2));
	}

IL_0108:
	{
		// for (; j >= 0; j -= 2) {
		int32_t L_58 = V_13;
		V_15 = (bool)((((int32_t)((((int32_t)L_58) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_59 = V_15;
		if (L_59)
		{
			goto IL_00ea;
		}
	}

IL_0116:
	{
		// if (j >= 0) {
		int32_t L_60 = V_13;
		V_16 = (bool)((((int32_t)((((int32_t)L_60) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_61 = V_16;
		if (!L_61)
		{
			goto IL_0149;
		}
	}
	{
		// pool.CopyData (srcData.Components[i + 1], dstData.Components[j + 1]);
		RuntimeObject* L_62 = V_12;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_63 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_64 = L_63->get_Components_2();
		int32_t L_65 = V_9;
		int32_t L_66 = ((int32_t)il2cpp_codegen_add((int32_t)L_65, (int32_t)1));
		int32_t L_67 = (L_64)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_66));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_68 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_69 = L_68->get_Components_2();
		int32_t L_70 = V_13;
		int32_t L_71 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
		int32_t L_72 = (L_69)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_71));
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_62, L_67, L_72);
		goto IL_01ce;
	}

IL_0149:
	{
		// if (dstData.Components.Length == dstData.ComponentsCountX2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_73 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = L_73->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_75 = V_3;
		int16_t L_76 = L_75->get_ComponentsCountX2_1();
		V_18 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)))) == ((int32_t)L_76))? 1 : 0);
		bool L_77 = V_18;
		if (!L_77)
		{
			goto IL_0176;
		}
	}
	{
		// Array.Resize (ref dstData.Components, dstData.ComponentsCountX2 << 1);
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_78 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_79 = L_78->get_address_of_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_80 = V_3;
		int16_t L_81 = L_80->get_ComponentsCountX2_1();
		Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_79, ((int32_t)((int32_t)L_81<<(int32_t)1)), /*hidden argument*/Array_Resize_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m43E9042CAC290211547D3FBAF385509539273C45_RuntimeMethod_var);
	}

IL_0176:
	{
		// dstData.Components[dstData.ComponentsCountX2] = typeIdx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_82 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_83 = L_82->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_84 = V_3;
		int16_t L_85 = L_84->get_ComponentsCountX2_1();
		int32_t L_86 = V_11;
		(L_83)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_85), (int32_t)L_86);
		// var idx = pool.New ();
		RuntimeObject* L_87 = V_12;
		int32_t L_88;
		L_88 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* System.Int32 Leopotam.Ecs.IEcsComponentPool::New() */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_87);
		V_17 = L_88;
		// dstData.Components[dstData.ComponentsCountX2 + 1] = idx;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_89 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_90 = L_89->get_Components_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_91 = V_3;
		int16_t L_92 = L_91->get_ComponentsCountX2_1();
		int32_t L_93 = V_17;
		(L_90)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)1))), (int32_t)L_93);
		// dstData.ComponentsCountX2 += 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_94 = V_3;
		int16_t* L_95 = L_94->get_address_of_ComponentsCountX2_1();
		int16_t* L_96 = L_95;
		int32_t L_97 = *((int16_t*)L_96);
		*((int16_t*)L_96) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)2))));
		// pool.CopyData (srcData.Components[i + 1], idx);
		RuntimeObject* L_98 = V_12;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_99 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_100 = L_99->get_Components_2();
		int32_t L_101 = V_9;
		int32_t L_102 = ((int32_t)il2cpp_codegen_add((int32_t)L_101, (int32_t)1));
		int32_t L_103 = (L_100)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_102));
		int32_t L_104 = V_17;
		InterfaceActionInvoker2< int32_t, int32_t >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsComponentPool::CopyData(System.Int32,System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_98, L_103, L_104);
		// owner.UpdateFilters (typeIdx, target, dstData);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_105 = V_1;
		int32_t L_106 = V_11;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_107 = ___target1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_108 = V_3;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline(L_105, L_106, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_107, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_108, /*hidden argument*/NULL);
		// componentsListChanged = true;
		V_0 = (bool)1;
	}

IL_01ce:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_109 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_109, (int32_t)2));
	}

IL_01d5:
	{
		// for (int i = 0, iiMax = srcData.ComponentsCountX2; i < iiMax; i += 2) {
		int32_t L_110 = V_9;
		int32_t L_111 = V_10;
		V_19 = (bool)((((int32_t)L_110) < ((int32_t)L_111))? 1 : 0);
		bool L_112 = V_19;
		if (L_112)
		{
			goto IL_00c7;
		}
	}
	{
		// if (componentsListChanged) {
		bool L_113 = V_0;
		V_20 = L_113;
		bool L_114 = V_20;
		if (!L_114)
		{
			goto IL_0228;
		}
	}
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		V_21 = 0;
		goto IL_0212;
	}

IL_01f1:
	{
		// owner.DebugListeners[ii].OnComponentListChanged (target);
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_115 = V_1;
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_116 = L_115->get_DebugListeners_11();
		int32_t L_117 = V_21;
		RuntimeObject* L_118;
		L_118 = List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline(L_116, L_117, /*hidden argument*/List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_119 = ___target1;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_120 = (*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_119);
		InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_118, L_120);
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_121 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
	}

IL_0212:
	{
		// for (var ii = 0; ii < owner.DebugListeners.Count; ii++) {
		int32_t L_122 = V_21;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_123 = V_1;
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_124 = L_123->get_DebugListeners_11();
		int32_t L_125;
		L_125 = List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline(L_124, /*hidden argument*/List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		V_22 = (bool)((((int32_t)L_122) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_22;
		if (L_126)
		{
			goto IL_01f1;
		}
	}
	{
	}

IL_0228:
	{
		// source.Destroy ();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_127 = ___source0;
		EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_127, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreEquals_mAE4FBAF8A9B3947C16DFE6825609F26E577705FD (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___lhs0;
		int32_t L_1 = L_0->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___rhs1;
		int32_t L_3 = L_2->get_Id_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___lhs0;
		uint16_t L_5 = L_4->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___rhs1;
		uint16_t L_7 = L_6->get_Gen_1();
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::AreIdEquals(Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreIdEquals_m74A8559CBC418864904B4E94C19A6ED752E5F1E4 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return lhs.Id == rhs.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___lhs0;
		int32_t L_1 = L_0->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___rhs1;
		int32_t L_3 = L_2->get_Id_0();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalId(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return entity.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		int32_t L_1 = L_0->get_Id_0();
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetInternalGen(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalGen_mC7DF09E9BD4DD4165245D8E935AB2F05BCC85A28 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return entity.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		uint16_t L_1 = L_0->get_Gen_1();
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// Leopotam.Ecs.EcsWorld Leopotam.Ecs.EcsEntityExtensions::GetInternalWorld(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * EcsEntityExtensions_GetInternalWorld_mBDD4AE3A2A25BEAD5950E621D73899A96BCC6764 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * V_0 = NULL;
	{
		// return entity.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Leopotam.Ecs.EcsEntityExtensions::Destroy(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___entity0;
		int32_t L_5 = L_4->get_Id_0();
		(&V_1)->set_Id_0(L_5);
		// savedEntity.Gen = entity.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		uint16_t L_7 = L_6->get_Gen_1();
		(&V_1)->set_Gen_1(L_7);
		// savedEntity.Owner = entity.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_8 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_9 = L_8->get_Owner_2();
		(&V_1)->set_Owner_2(L_9);
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		uint16_t L_11 = L_10->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_12 = ___entity0;
		uint16_t L_13 = L_12->get_Gen_1();
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t * L_15 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_RuntimeMethod_var)));
	}

IL_0056:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_16 = V_0;
		int16_t L_17 = L_16->get_ComponentsCountX2_1();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)2));
		goto IL_00f2;
	}

IL_0064:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_18 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_19 = L_18.get_Owner_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_20 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = L_20->get_Components_2();
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_25 = V_0;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline(L_19, ((-L_24)), (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_1), (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_25, /*hidden argument*/NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_26 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_27 = L_26.get_Owner_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_28 = L_27->get_ComponentPools_9();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_29 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = L_29->get_Components_2();
		int32_t L_31 = V_3;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = L_36->get_Components_2();
		int32_t L_38 = V_3;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_35, L_40);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_41 = V_0;
		int16_t* L_42 = L_41->get_address_of_ComponentsCountX2_1();
		int16_t* L_43 = L_42;
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)2))));
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_4 = 0;
		goto IL_00d3;
	}

IL_00b2:
	{
		// savedEntity.Owner.DebugListeners[ii].OnComponentListChanged (savedEntity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_45 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_46 = L_45.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_47 = L_46->get_DebugListeners_11();
		int32_t L_48 = V_4;
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline(L_47, L_48, /*hidden argument*/List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_50 = V_1;
		InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_49, L_50);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00d3:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_52 = V_4;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_53 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_54 = L_53.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_55 = L_54->get_DebugListeners_11();
		int32_t L_56;
		L_56 = List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline(L_55, /*hidden argument*/List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_52) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_00b2;
		}
	}
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)2));
	}

IL_00f2:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_59 = V_3;
		V_6 = (bool)((((int32_t)((((int32_t)L_59) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_6;
		if (L_60)
		{
			goto IL_0064;
		}
	}
	{
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_61 = V_0;
		L_61->set_ComponentsCountX2_1((int16_t)0);
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_62 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_63 = L_62.get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_64 = V_1;
		int32_t L_65 = L_64.get_Id_0();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_66 = V_0;
		EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43(L_63, L_65, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_66, /*hidden argument*/NULL);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_7 = 0;
		goto IL_0142;
	}

IL_0121:
	{
		// savedEntity.Owner.DebugListeners[ii].OnEntityDestroyed (savedEntity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_67 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_68 = L_67.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_69 = L_68->get_DebugListeners_11();
		int32_t L_70 = V_7;
		RuntimeObject* L_71;
		L_71 = List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline(L_69, L_70, /*hidden argument*/List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_72 = V_1;
		InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(1 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityDestroyed(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_71, L_72);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_73 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0142:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_74 = V_7;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_75 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_76 = L_75.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_77 = L_76->get_DebugListeners_11();
		int32_t L_78;
		L_78 = List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline(L_77, /*hidden argument*/List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_74) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_8;
		if (L_79)
		{
			goto IL_0121;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsNull(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsNull_m030A5B4C42B6B884C8DC76841BF6751D8FB01A36 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Id == 0 && entity.Gen == 0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		int32_t L_1 = L_0->get_Id_0();
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		uint16_t L_3 = L_2->get_Gen_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!IsWorldAlive (entity)) { return false; }
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_3 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_4 = L_3->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_5 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_6;
		L_6 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_4, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_5, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_6;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = V_0;
		uint16_t L_8 = L_7->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_9 = ___entity0;
		uint16_t L_10 = L_9->get_Gen_1();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_11 = V_0;
		int16_t L_12 = L_11->get_ComponentsCountX2_1();
		G_B5_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 0;
	}

IL_003d:
	{
		V_2 = (bool)G_B5_0;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean Leopotam.Ecs.EcsEntityExtensions::IsWorldAlive(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = L_2->get_Owner_2();
		bool L_4;
		L_4 = EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentsCount(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentsCount_mAD0265A2CBB20E7700DF9F00A68E16393E197D7D (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B5_0 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_4 = V_0;
		uint16_t L_5 = L_4->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		uint16_t L_7 = L_6->get_Gen_1();
		V_1 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t * L_9 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_GetComponentsCount_mAD0265A2CBB20E7700DF9F00A68E16393E197D7D_RuntimeMethod_var)));
	}

IL_002f:
	{
		// return entityData.ComponentsCountX2 <= 0 ? 0 : (entityData.ComponentsCountX2 >> 1);
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		int16_t L_11 = L_10->get_ComponentsCountX2_1();
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_12 = V_0;
		int16_t L_13 = L_12->get_ComponentsCountX2_1();
		G_B5_0 = ((int32_t)((int32_t)L_13>>(int32_t)1));
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 0;
	}

IL_0043:
	{
		V_2 = G_B5_0;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		int32_t L_14 = V_2;
		return L_14;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentTypes(Leopotam.Ecs.EcsEntity&,System.Type[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentTypes_m514CE84BF6B20945875143B6837A11AE47760555 (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** ___list1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B5_0 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_4 = V_0;
		uint16_t L_5 = L_4->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		uint16_t L_7 = L_6->get_Gen_1();
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t * L_9 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_GetComponentTypes_m514CE84BF6B20945875143B6837A11AE47760555_RuntimeMethod_var)));
	}

IL_002f:
	{
		// var itemsCount = entityData.ComponentsCountX2 >> 1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		int16_t L_11 = L_10->get_ComponentsCountX2_1();
		V_1 = ((int32_t)((int32_t)L_11>>(int32_t)1));
		// if (list == null || list.Length < itemsCount) {
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** L_12 = ___list1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_13 = *((TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755**)L_12);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** L_14 = ___list1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15 = *((TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755**)L_14);
		int32_t L_16 = V_1;
		G_B5_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))) < ((int32_t)L_16))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B5_0 = 1;
	}

IL_0046:
	{
		V_3 = (bool)G_B5_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0054;
		}
	}
	{
		// list = new Type[itemsCount];
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** L_18 = ___list1;
		int32_t L_19 = V_1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_20 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)L_19);
		*((RuntimeObject **)L_18) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_18, (void*)(RuntimeObject *)L_20);
	}

IL_0054:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_4 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_5 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_21 = V_0;
		int16_t L_22 = L_21->get_ComponentsCountX2_1();
		V_6 = L_22;
		goto IL_0091;
	}

IL_0064:
	{
		// list[j] = entity.Owner.ComponentPools[entityData.Components[i]].ItemType;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** L_23 = ___list1;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_24 = *((TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755**)L_23);
		int32_t L_25 = V_5;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_26 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_27 = L_26->get_Owner_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_28 = L_27->get_ComponentPools_9();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_29 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = L_29->get_Components_2();
		int32_t L_31 = V_4;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		Type_t * L_36;
		L_36 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* System.Type Leopotam.Ecs.IEcsComponentPool::get_ItemType() */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_35);
		ArrayElementTypeCheck (L_24, L_36);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25), (Type_t *)L_36);
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_37 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)2));
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_38 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_39 = V_4;
		int32_t L_40 = V_6;
		V_7 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_7;
		if (L_41)
		{
			goto IL_0064;
		}
	}
	{
		// return itemsCount;
		int32_t L_42 = V_1;
		V_8 = L_42;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		int32_t L_43 = V_8;
		return L_43;
	}
}
// System.Int32 Leopotam.Ecs.EcsEntityExtensions::GetComponentValues(Leopotam.Ecs.EcsEntity&,System.Object[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetComponentValues_m49F8E2850DC3B33CD8BBAAA4AD16BD605D60F13B (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___list1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t G_B5_0 = 0;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_4 = V_0;
		uint16_t L_5 = L_4->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		uint16_t L_7 = L_6->get_Gen_1();
		V_2 = (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_002f;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t * L_9 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_GetComponentValues_m49F8E2850DC3B33CD8BBAAA4AD16BD605D60F13B_RuntimeMethod_var)));
	}

IL_002f:
	{
		// var itemsCount = entityData.ComponentsCountX2 >> 1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		int16_t L_11 = L_10->get_ComponentsCountX2_1();
		V_1 = ((int32_t)((int32_t)L_11>>(int32_t)1));
		// if (list == null || list.Length < itemsCount) {
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** L_12 = ___list1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_13 = *((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)L_12);
		if (!L_13)
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** L_14 = ___list1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = *((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)L_14);
		int32_t L_16 = V_1;
		G_B5_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))) < ((int32_t)L_16))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B5_0 = 1;
	}

IL_0046:
	{
		V_3 = (bool)G_B5_0;
		bool L_17 = V_3;
		if (!L_17)
		{
			goto IL_0054;
		}
	}
	{
		// list = new object[itemsCount];
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** L_18 = ___list1;
		int32_t L_19 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)L_19);
		*((RuntimeObject **)L_18) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_18, (void*)(RuntimeObject *)L_20);
	}

IL_0054:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_4 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		V_5 = 0;
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_21 = V_0;
		int16_t L_22 = L_21->get_ComponentsCountX2_1();
		V_6 = L_22;
		goto IL_009c;
	}

IL_0064:
	{
		// list[j] = entity.Owner.ComponentPools[entityData.Components[i]].GetItem (entityData.Components[i + 1]);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** L_23 = ___list1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_24 = *((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)L_23);
		int32_t L_25 = V_5;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_26 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_27 = L_26->get_Owner_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_28 = L_27->get_ComponentPools_9();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_29 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = L_29->get_Components_2();
		int32_t L_31 = V_4;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = L_36->get_Components_2();
		int32_t L_38 = V_4;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		RuntimeObject * L_41;
		L_41 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(1 /* System.Object Leopotam.Ecs.IEcsComponentPool::GetItem(System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_35, L_40);
		ArrayElementTypeCheck (L_24, L_41);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_25), (RuntimeObject *)L_41);
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_42 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)2));
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_43 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_009c:
	{
		// for (int i = 0, j = 0, iMax = entityData.ComponentsCountX2; i < iMax; i += 2, j++) {
		int32_t L_44 = V_4;
		int32_t L_45 = V_6;
		V_7 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_7;
		if (L_46)
		{
			goto IL_0064;
		}
	}
	{
		// return itemsCount;
		int32_t L_47 = V_1;
		V_8 = L_47;
		goto IL_00ad;
	}

IL_00ad:
	{
		// }
		int32_t L_48 = V_8;
		return L_48;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.Ecs.EcsFilter::.ctor(Leopotam.Ecs.EcsWorld)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter__ctor_m34F9F21641393E156462BB3409817E43D09BE290 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected EcsFilter (EcsWorld world) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// EntitiesCacheSize = world.Config.FilterEntitiesCacheSize;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_0 = ___world0;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_1 = L_0->get_address_of_Config_7();
		int32_t L_2 = L_1->get_FilterEntitiesCacheSize_4();
		__this->set_EntitiesCacheSize_4(L_2);
		// Entities = new EcsEntity[EntitiesCacheSize];
		int32_t L_3 = __this->get_EntitiesCacheSize_4();
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_4 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)SZArrayNew(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->set_Entities_0(L_4);
		// EntitiesMap = new Dictionary<int, int> (EntitiesCacheSize);
		int32_t L_5 = __this->get_EntitiesCacheSize_4();
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_6 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)il2cpp_codegen_object_new(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88(L_6, L_5, /*hidden argument*/Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		__this->set_EntitiesMap_1(L_6);
		// _delayedOps = new DelayedOp[EntitiesCacheSize];
		int32_t L_7 = __this->get_EntitiesCacheSize_4();
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_8 = (DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2*)(DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2*)SZArrayNew(DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set__delayedOps_5(L_8);
		// }
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Leopotam.Ecs.EcsFilter::GetInternalEntitiesMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * V_0 = NULL;
	{
		// return EntitiesMap;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = __this->get_EntitiesMap_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsFilter/Enumerator Leopotam.Ecs.EcsFilter::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C  EcsFilter_GetEnumerator_m9C0CCB926164DD980730EFA9090D4AF1DE8F245B (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Enumerator (this);
		Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline((&L_0), __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C  L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsEntity& Leopotam.Ecs.EcsFilter::GetEntity(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * EcsFilter_GetEntity_m10FA72BE6D16E42C40FE61BB1CD63B7C9B941F05 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, int32_t* ___idx0, const RuntimeMethod* method)
{
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * V_0 = NULL;
	{
		// return ref Entities[idx];
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_0 = __this->get_Entities_0();
		int32_t* L_1 = ___idx0;
		int32_t L_2 = *((int32_t*)L_1);
		V_0 = (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)((L_0)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_2)));
		goto IL_0011;
	}

IL_0011:
	{
		// }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_3 = V_0;
		return (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(L_3);
	}
}
// System.Int32 Leopotam.Ecs.EcsFilter::GetEntitiesCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return EntitiesCount;
		int32_t L_0 = __this->get_EntitiesCount_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_IsEmpty_m119E6E25DB7D59AE573C08DB6837A0361AD2748D (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return EntitiesCount == 0;
		int32_t L_0 = __this->get_EntitiesCount_2();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::IsCompatible(Leopotam.Ecs.EcsWorld/EcsEntityData&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B26_0 = 0;
	{
		// var incIdx = IncludedTypeIndices.Length - 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_IncludedTypeIndices_7();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1));
		goto IL_0074;
	}

IL_000e:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_IncludedTypeIndices_7();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5 = ___entityData0;
		int16_t L_6 = L_5->get_ComponentsCountX2_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2));
		goto IL_0054;
	}

IL_0023:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7->get_Components_2();
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_12 = V_3;
		int32_t L_13 = ___addedRemovedTypeIndex1;
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)((-L_13))))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		// continue;
		goto IL_0050;
	}

IL_003b:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_15 = V_3;
		int32_t L_16 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		G_B7_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B7_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B7_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_004f;
		}
	}
	{
		// break;
		goto IL_0061;
	}

IL_004f:
	{
	}

IL_0050:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)2));
	}

IL_0054:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_21 = V_2;
		V_6 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		// if (idx == -2) {
		int32_t L_23 = V_2;
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_006f;
		}
	}
	{
		// break;
		goto IL_0081;
	}

IL_006f:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0074:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_26 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_000e;
		}
	}

IL_0081:
	{
		// if (incIdx != -1) {
		int32_t L_28 = V_0;
		V_9 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_0097:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = __this->get_ExcludedTypeIndices_8();
		V_11 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_30) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_012b;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		V_12 = 0;
		goto IL_0118;
	}

IL_00af:
	{
		// var typeIdx = ExcludedTypeIndices[excIdx];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = __this->get_ExcludedTypeIndices_8();
		int32_t L_33 = V_12;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = ___entityData0;
		int16_t L_37 = L_36->get_ComponentsCountX2_1();
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)2));
		goto IL_0103;
	}

IL_00c7:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_38 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = L_38->get_Components_2();
		int32_t L_40 = V_14;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_15 = L_42;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_43 = V_15;
		int32_t L_44 = ___addedRemovedTypeIndex1;
		V_16 = (bool)((((int32_t)L_43) == ((int32_t)((-L_44))))? 1 : 0);
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00e2;
		}
	}
	{
		// continue;
		goto IL_00fd;
	}

IL_00e2:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_46 = V_15;
		int32_t L_47 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_46) == ((int32_t)L_47)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_48 = V_15;
		int32_t L_49 = V_13;
		G_B26_0 = ((((int32_t)L_48) == ((int32_t)L_49))? 1 : 0);
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B26_0 = 1;
	}

IL_00f0:
	{
		V_17 = (bool)G_B26_0;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_00fc;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_51 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)2));
	}

IL_0103:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_52 = V_14;
		V_18 = (bool)((((int32_t)((((int32_t)L_52) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_18;
		if (L_53)
		{
			goto IL_00c7;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_54 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0118:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_55 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = __this->get_ExcludedTypeIndices_8();
		V_19 = (bool)((((int32_t)L_55) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))? 1 : 0);
		bool L_57 = V_19;
		if (L_57)
		{
			goto IL_00af;
		}
	}
	{
	}

IL_012b:
	{
		// return true;
		V_10 = (bool)1;
		goto IL_0130;
	}

IL_0130:
	{
		// }
		bool L_58 = V_10;
		return L_58;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::AddDelayedOp(System.Boolean,Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AddDelayedOp_m25725CEC99ECD2B191130BDCC11408BDEA0300BC (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, bool ___isAdd0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->get_LockCount_3();
		V_1 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0077;
	}

IL_0016:
	{
		// if (_delayedOps.Length == _delayedOpsCount) {
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_2 = __this->get__delayedOps_5();
		int32_t L_3 = __this->get__delayedOpsCount_6();
		V_3 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0040;
		}
	}
	{
		// Array.Resize (ref _delayedOps, _delayedOpsCount << 1);
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2** L_5 = __this->get_address_of__delayedOps_5();
		int32_t L_6 = __this->get__delayedOpsCount_6();
		Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D((DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2**)L_5, ((int32_t)((int32_t)L_6<<(int32_t)1)), /*hidden argument*/Array_Resize_TisDelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_mDC92C8659E10675AED09842A1EC731E9DBC5181D_RuntimeMethod_var);
	}

IL_0040:
	{
		// ref var op = ref _delayedOps[_delayedOpsCount++];
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_7 = __this->get__delayedOps_5();
		int32_t L_8 = __this->get__delayedOpsCount_6();
		V_4 = L_8;
		int32_t L_9 = V_4;
		__this->set__delayedOpsCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
		int32_t L_10 = V_4;
		V_0 = (DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 *)((L_7)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_10)));
		// op.IsAdd = isAdd;
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_11 = V_0;
		bool L_12 = ___isAdd0;
		L_11->set_IsAdd_0(L_12);
		// op.Entity = entity;
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_13 = V_0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_14 = ___entity1;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_15 = (*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_14);
		L_13->set_Entity_1(L_15);
		// return true;
		V_2 = (bool)1;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		bool L_16 = V_2;
		return L_16;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Lock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	{
		// LockCount++;
		int32_t L_0 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsFilter::Unlock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->get_LockCount_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception ($"Invalid lock-unlock balance for \"{GetType ().Name}\".");
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42421D059AAE096C7B60839ABFEB44B5C73C66C4)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606C771900936C652E7DC0D284530387D5ED57D1)), /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_RuntimeMethod_var)));
	}

IL_0032:
	{
		// LockCount--;
		int32_t L_6 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_7 = __this->get_LockCount_3();
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = __this->get__delayedOpsCount_6();
		G_B5_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 0;
	}

IL_0054:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00b9;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_10 = __this->get__delayedOpsCount_6();
		V_3 = L_10;
		goto IL_00a7;
	}

IL_0064:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_11 = __this->get__delayedOps_5();
		int32_t L_12 = V_2;
		V_4 = (DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 *)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)));
		// if (op.IsAdd) {
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_13 = V_4;
		bool L_14 = L_13->get_IsAdd_0();
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_16 = V_4;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_17 = L_16->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_17);
		goto IL_00a2;
	}

IL_0092:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_18 = V_4;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_19 = L_18->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_19);
	}

IL_00a2:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00a7:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0064;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->set__delayedOpsCount_6(0);
	}

IL_00b9:
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsFilter::AreComponentsSame(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsFilter_AreComponentsSame_m104DC79D548547DCA83C47DB4A1C0A13CA06E444 (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// if (IncludedTypeIndices.Length != filter.IncludedTypeIndices.Length) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_IncludedTypeIndices_7();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_1 = ___filter0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1->get_IncludedTypeIndices_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_0022:
	{
		// for (var i = 0; i < IncludedTypeIndices.Length; i++) {
		V_2 = 0;
		goto IL_004e;
	}

IL_0026:
	{
		// if (Array.IndexOf (filter.IncludedTypeIndices, IncludedTypeIndices[i]) == -1) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_4 = ___filter0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4->get_IncludedTypeIndices_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = __this->get_IncludedTypeIndices_7();
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		int32_t L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10;
		L_10 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8(L_5, L_9, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)(-1)))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_0049:
	{
		// for (var i = 0; i < IncludedTypeIndices.Length; i++) {
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_004e:
	{
		// for (var i = 0; i < IncludedTypeIndices.Length; i++) {
		int32_t L_13 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = __this->get_IncludedTypeIndices_7();
		V_4 = (bool)((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))? 1 : 0);
		bool L_15 = V_4;
		if (L_15)
		{
			goto IL_0026;
		}
	}
	{
		// if ((ExcludedTypeIndices == null && filter.ExcludedTypeIndices != null) ||
		//     (ExcludedTypeIndices != null && filter.ExcludedTypeIndices == null)) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = __this->get_ExcludedTypeIndices_8();
		if (L_16)
		{
			goto IL_006f;
		}
	}
	{
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_17 = ___filter0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = L_17->get_ExcludedTypeIndices_8();
		if (L_18)
		{
			goto IL_0085;
		}
	}

IL_006f:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = __this->get_ExcludedTypeIndices_8();
		if (!L_19)
		{
			goto IL_0082;
		}
	}
	{
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_20 = ___filter0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = L_20->get_ExcludedTypeIndices_8();
		G_B12_0 = ((((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_21) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0083;
	}

IL_0082:
	{
		G_B12_0 = 0;
	}

IL_0083:
	{
		G_B14_0 = G_B12_0;
		goto IL_0086;
	}

IL_0085:
	{
		G_B14_0 = 1;
	}

IL_0086:
	{
		V_5 = (bool)G_B14_0;
		bool L_22 = V_5;
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_0094:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = __this->get_ExcludedTypeIndices_8();
		V_6 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_23) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0111;
		}
	}
	{
		// if (filter.ExcludedTypeIndices == null || ExcludedTypeIndices.Length != filter.ExcludedTypeIndices.Length) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_25 = ___filter0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_26 = L_25->get_ExcludedTypeIndices_8();
		if (!L_26)
		{
			goto IL_00c3;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = __this->get_ExcludedTypeIndices_8();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_28 = ___filter0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = L_28->get_ExcludedTypeIndices_8();
		G_B20_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c4;
	}

IL_00c3:
	{
		G_B20_0 = 1;
	}

IL_00c4:
	{
		V_7 = (bool)G_B20_0;
		bool L_30 = V_7;
		if (!L_30)
		{
			goto IL_00cf;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_00cf:
	{
		// for (var i = 0; i < ExcludedTypeIndices.Length; i++) {
		V_8 = 0;
		goto IL_00fe;
	}

IL_00d4:
	{
		// if (Array.IndexOf (filter.ExcludedTypeIndices, ExcludedTypeIndices[i]) == -1) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_31 = ___filter0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = L_31->get_ExcludedTypeIndices_8();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = __this->get_ExcludedTypeIndices_8();
		int32_t L_34 = V_8;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		int32_t L_37;
		L_37 = Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8(L_32, L_36, /*hidden argument*/Array_IndexOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6F8F84EAF15D94B2244AD7E39E8A66FB3984A1E8_RuntimeMethod_var);
		V_9 = (bool)((((int32_t)L_37) == ((int32_t)(-1)))? 1 : 0);
		bool L_38 = V_9;
		if (!L_38)
		{
			goto IL_00f7;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0115;
	}

IL_00f7:
	{
		// for (var i = 0; i < ExcludedTypeIndices.Length; i++) {
		int32_t L_39 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1));
	}

IL_00fe:
	{
		// for (var i = 0; i < ExcludedTypeIndices.Length; i++) {
		int32_t L_40 = V_8;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = __this->get_ExcludedTypeIndices_8();
		V_10 = (bool)((((int32_t)L_40) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))))? 1 : 0);
		bool L_42 = V_10;
		if (L_42)
		{
			goto IL_00d4;
		}
	}
	{
	}

IL_0111:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0115;
	}

IL_0115:
	{
		// }
		bool L_43 = V_1;
		return L_43;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.Ecs.EcsIgnoreInjectAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsIgnoreInjectAttribute__ctor_mCEEE149D7E24BF1CB76FFB48B5330D4A66F7DB2B (EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.Ecs.EcsSystems::AddDebugListener(Leopotam.Ecs.IEcsSystemsDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_AddDebugListener_m6B591ADDBD124EAE8279125D01D18A02A5C6E2F3 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC60BEFA252C2C26B7BF67F8218834090C2956B40_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB398480C1B076194BB4CBA8FB26B3378F973A6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_AddDebugListener_m6B591ADDBD124EAE8279125D01D18A02A5C6E2F3_RuntimeMethod_var)));
	}

IL_0015:
	{
		// _debugListeners.Add (listener);
		List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * L_3 = __this->get__debugListeners_9();
		RuntimeObject* L_4 = ___listener0;
		List_1_Add_mC60BEFA252C2C26B7BF67F8218834090C2956B40(L_3, L_4, /*hidden argument*/List_1_Add_mC60BEFA252C2C26B7BF67F8218834090C2956B40_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::RemoveDebugListener(Leopotam.Ecs.IEcsSystemsDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_RemoveDebugListener_m8682D029A1653066E9333B4C5CF5A33D2686ABD2 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mFB35EBBAFBFE02C3EF85A6568C0E04169FC81D8D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("listener is null"); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AB398480C1B076194BB4CBA8FB26B3378F973A6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_RemoveDebugListener_m8682D029A1653066E9333B4C5CF5A33D2686ABD2_RuntimeMethod_var)));
	}

IL_0015:
	{
		// _debugListeners.Remove (listener);
		List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * L_3 = __this->get__debugListeners_9();
		RuntimeObject* L_4 = ___listener0;
		bool L_5;
		L_5 = List_1_Remove_mFB35EBBAFBFE02C3EF85A6568C0E04169FC81D8D(L_3, L_4, /*hidden argument*/List_1_Remove_mFB35EBBAFBFE02C3EF85A6568C0E04169FC81D8D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::.ctor(Leopotam.Ecs.EcsWorld,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems__ctor_m3CE03D7D087AA88356B352D0473CFE80449066A4 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world0, String_t* ___name1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m523AA645DFA1BD8ADF220B73101ACF88FD09405E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly EcsGrowList<IEcsSystem> _allSystems = new EcsGrowList<IEcsSystem> (64);
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_0 = (EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 *)il2cpp_codegen_object_new(EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_inline(L_0, ((int32_t)64), /*hidden argument*/EcsGrowList_1__ctor_mFCCC1AE5CE009E261FC90917B1A48336C0FF5374_RuntimeMethod_var);
		__this->set__allSystems_2(L_0);
		// readonly EcsGrowList<EcsSystemsRunItem> _runSystems = new EcsGrowList<EcsSystemsRunItem> (64);
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_1 = (EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F *)il2cpp_codegen_object_new(EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_inline(L_1, ((int32_t)64), /*hidden argument*/EcsGrowList_1__ctor_m827FB78D21F068F7A7EBF735CD0244EBA96AE024_RuntimeMethod_var);
		__this->set__runSystems_3(L_1);
		// readonly Dictionary<int, int> _namedRunSystems = new Dictionary<int, int> (64);
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_2 = (Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 *)il2cpp_codegen_object_new(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88(L_2, ((int32_t)64), /*hidden argument*/Dictionary_2__ctor_mD6B505C3E5EDCB75FD93A436AA12E4904337BA88_RuntimeMethod_var);
		__this->set__namedRunSystems_4(L_2);
		// readonly Dictionary<Type, object> _injections = new Dictionary<Type, object> (32);
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_3 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)il2cpp_codegen_object_new(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328(L_3, ((int32_t)32), /*hidden argument*/Dictionary_2__ctor_mD04C8FED0F2AE94C346BA1748DE87334690C0328_RuntimeMethod_var);
		__this->set__injections_5(L_3);
		// readonly List<IEcsSystemsDebugListener> _debugListeners = new List<IEcsSystemsDebugListener> (4);
		List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * L_4 = (List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 *)il2cpp_codegen_object_new(List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970_il2cpp_TypeInfo_var);
		List_1__ctor_m523AA645DFA1BD8ADF220B73101ACF88FD09405E(L_4, 4, /*hidden argument*/List_1__ctor_m523AA645DFA1BD8ADF220B73101ACF88FD09405E_RuntimeMethod_var);
		__this->set__debugListeners_9(L_4);
		// public EcsSystems (EcsWorld world, string name = null) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// World = world;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_5 = ___world0;
		__this->set_World_1(L_5);
		// Name = name;
		String_t* L_6 = ___name1;
		__this->set_Name_0(L_6);
		// }
		return;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Add(Leopotam.Ecs.IEcsSystem,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, RuntimeObject* ___system0, String_t* ___namedRunSystem1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * V_9 = NULL;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (system == null) { throw new Exception ("System is null."); }
		RuntimeObject* L_0 = ___system0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (system == null) { throw new Exception ("System is null."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAD9511B3791B6914024A8A85095F5542D1019951)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0_RuntimeMethod_var)));
	}

IL_0015:
	{
		// if (_initialized) { throw new Exception ("Cant add system after initialization."); }
		bool L_3 = __this->get__initialized_7();
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Cant add system after initialization."); }
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral629984DF45E8ABD6B751FF45E163326B9D580988)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0_RuntimeMethod_var)));
	}

IL_002b:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_6 = __this->get__destroyed_8();
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0041;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0_RuntimeMethod_var)));
	}

IL_0041:
	{
		// if (!string.IsNullOrEmpty (namedRunSystem) && !(system is IEcsRunSystem)) { throw new Exception ("Cant name non-IEcsRunSystem."); }
		String_t* L_9 = ___namedRunSystem1;
		bool L_10;
		L_10 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0057;
		}
	}
	{
		RuntimeObject* L_11 = ___system0;
		G_B9_0 = ((((int32_t)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_11, IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0058;
	}

IL_0057:
	{
		G_B9_0 = 0;
	}

IL_0058:
	{
		V_3 = (bool)G_B9_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		// if (!string.IsNullOrEmpty (namedRunSystem) && !(system is IEcsRunSystem)) { throw new Exception ("Cant name non-IEcsRunSystem."); }
		Exception_t * L_13 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0983E2F566C219C5C61211ED8BC8EA7F270A906E)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0_RuntimeMethod_var)));
	}

IL_0068:
	{
		// _allSystems.Add (system);
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_14 = __this->get__allSystems_2();
		RuntimeObject* L_15 = ___system0;
		EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_inline(L_14, L_15, /*hidden argument*/EcsGrowList_1_Add_m63C1D2731DCB0120F887DA9D85DAB6ECF07A2D65_RuntimeMethod_var);
		// if (system is IEcsRunSystem) {
		RuntimeObject* L_16 = ___system0;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_16, IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_0128;
		}
	}
	{
		// if (namedRunSystem == null && system is EcsSystems ecsSystems) {
		String_t* L_18 = ___namedRunSystem1;
		if (L_18)
		{
			goto IL_009a;
		}
	}
	{
		RuntimeObject* L_19 = ___system0;
		V_5 = ((EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 *)IsInstSealed((RuntimeObject*)L_19, EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var));
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_20 = V_5;
		G_B15_0 = ((!(((RuntimeObject*)(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 *)L_20) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_009b;
	}

IL_009a:
	{
		G_B15_0 = 0;
	}

IL_009b:
	{
		V_6 = (bool)G_B15_0;
		bool L_21 = V_6;
		if (!L_21)
		{
			goto IL_00ac;
		}
	}
	{
		// namedRunSystem = ecsSystems.Name;
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_22 = V_5;
		String_t* L_23 = L_22->get_Name_0();
		___namedRunSystem1 = L_23;
	}

IL_00ac:
	{
		// if (namedRunSystem != null) {
		String_t* L_24 = ___namedRunSystem1;
		V_7 = (bool)((!(((RuntimeObject*)(String_t*)L_24) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_0103;
		}
	}
	{
		// if (_namedRunSystems.ContainsKey (namedRunSystem.GetHashCode ())) {
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_26 = __this->get__namedRunSystems_4();
		String_t* L_27 = ___namedRunSystem1;
		int32_t L_28;
		L_28 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_27);
		bool L_29;
		L_29 = Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391(L_26, L_28, /*hidden argument*/Dictionary_2_ContainsKey_m263EB6C52C97405E419D9C2C54C18C15AD02C391_RuntimeMethod_var);
		V_8 = L_29;
		bool L_30 = V_8;
		if (!L_30)
		{
			goto IL_00e5;
		}
	}
	{
		// throw new Exception ($"Cant add named system - \"{namedRunSystem}\" name already exists.");
		String_t* L_31 = ___namedRunSystem1;
		String_t* L_32;
		L_32 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBAD9D618F46B8767EA3F5D2E39C4174C54422E7A)), L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC74D986764FC80FC48FB6A690AE1752FE4336E20)), /*hidden argument*/NULL);
		Exception_t * L_33 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_33, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Add_m1D403F6627F21E4168841CED6358DAD6560AE5B0_RuntimeMethod_var)));
	}

IL_00e5:
	{
		// _namedRunSystems[namedRunSystem.GetHashCode ()] = _runSystems.Count;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_34 = __this->get__namedRunSystems_4();
		String_t* L_35 = ___namedRunSystem1;
		int32_t L_36;
		L_36 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_35);
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_37 = __this->get__runSystems_3();
		int32_t L_38 = L_37->get_Count_1();
		Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1(L_34, L_36, L_38, /*hidden argument*/Dictionary_2_set_Item_mD72184D856B7E64CF626DE131ACA0A6F651874C1_RuntimeMethod_var);
	}

IL_0103:
	{
		// _runSystems.Add (new EcsSystemsRunItem { Active = true, System = (IEcsRunSystem) system });
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_39 = __this->get__runSystems_3();
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_40 = (EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C *)il2cpp_codegen_object_new(EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C_il2cpp_TypeInfo_var);
		EcsSystemsRunItem__ctor_m5846EA79A00CF9DB479DB3B43ED8BF75574A0152(L_40, /*hidden argument*/NULL);
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_41 = L_40;
		L_41->set_Active_0((bool)1);
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_42 = L_41;
		RuntimeObject* L_43 = ___system0;
		L_42->set_System_1(((RuntimeObject*)Castclass((RuntimeObject*)L_43, IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var)));
		EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_inline(L_39, L_42, /*hidden argument*/EcsGrowList_1_Add_m12B9D29385B73808601D74AD2BC463D1F2C962F9_RuntimeMethod_var);
	}

IL_0128:
	{
		// return this;
		V_9 = __this;
		goto IL_012d;
	}

IL_012d:
	{
		// }
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_44 = V_9;
		return L_44;
	}
}
// System.Int32 Leopotam.Ecs.EcsSystems::GetNamedRunSystem(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsSystems_GetNamedRunSystem_m5E8090053EF00663DC812BFD400A2DD7997255FF (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// return _namedRunSystems.TryGetValue (name.GetHashCode (), out var idx) ? idx : -1;
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_0 = __this->get__namedRunSystems_4();
		String_t* L_1 = ___name0;
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_0, L_2, (int32_t*)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0019;
		}
	}
	{
		G_B3_0 = (-1);
		goto IL_001a;
	}

IL_0019:
	{
		int32_t L_4 = V_0;
		G_B3_0 = L_4;
	}

IL_001a:
	{
		V_1 = G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		int32_t L_5 = V_1;
		return L_5;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::SetRunSystemState(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_SetRunSystemState_m6194FDC3B9971633D00F1F43D6F8C74A84836AFD (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, int32_t ___idx0, bool ___state1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___idx0;
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_2 = __this->get__runSystems_3();
		int32_t L_3 = L_2->get_Count_1();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD005F93B177BE1B4026669C892E44D2F18CCCD6C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_SetRunSystemState_m6194FDC3B9971633D00F1F43D6F8C74A84836AFD_RuntimeMethod_var)));
	}

IL_0029:
	{
		// _runSystems.Items[idx].Active = state;
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_6 = __this->get__runSystems_3();
		EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* L_7 = L_6->get_Items_0();
		int32_t L_8 = ___idx0;
		int32_t L_9 = L_8;
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11 = ___state1;
		L_10->set_Active_0(L_11);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsSystems::GetRunSystemState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsSystems_GetRunSystemState_mD70B402B67CA7E55A85EE42E801252D0B86BF95E (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, int32_t ___idx0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		int32_t L_0 = ___idx0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = ___idx0;
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_2 = __this->get__runSystems_3();
		int32_t L_3 = L_2->get_Count_1();
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 1;
	}

IL_0019:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0029;
		}
	}
	{
		// if (idx < 0 || idx >= _runSystems.Count) { throw new Exception ("Invalid index"); }
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD005F93B177BE1B4026669C892E44D2F18CCCD6C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_GetRunSystemState_mD70B402B67CA7E55A85EE42E801252D0B86BF95E_RuntimeMethod_var)));
	}

IL_0029:
	{
		// return _runSystems.Items[idx].Active;
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_6 = __this->get__runSystems_3();
		EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* L_7 = L_6->get_Items_0();
		int32_t L_8 = ___idx0;
		int32_t L_9 = L_8;
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		bool L_11 = L_10->get_Active_0();
		V_1 = L_11;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.IEcsSystem> Leopotam.Ecs.EcsSystems::GetAllSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * EcsSystems_GetAllSystems_m5BF65B1FA089915F7961289B5CD3F4E462520A23 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * V_0 = NULL;
	{
		// return _allSystems;
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_0 = __this->get__allSystems_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsGrowList`1<Leopotam.Ecs.EcsSystemsRunItem> Leopotam.Ecs.EcsSystems::GetRunSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * EcsSystems_GetRunSystems_m44EF4E5E7669B7E09A64BDA0EE62527EF1DCA14C (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * V_0 = NULL;
	{
		// return _runSystems;
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_0 = __this->get__runSystems_3();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::Inject(System.Object,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_Inject_mDB2C8962A0F764B113EE74E30C16531B39B67849 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, RuntimeObject * ___obj0, Type_t * ___overridenType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * V_4 = NULL;
	int32_t G_B7_0 = 0;
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		bool L_0 = __this->get__initialized_7();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FC4420D546F38081E27458A6B155EA0E2FBBA4D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Inject_mDB2C8962A0F764B113EE74E30C16531B39B67849_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (obj == null) { throw new Exception ("Cant inject null instance."); }
		RuntimeObject * L_3 = ___obj0;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject *)L_3) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// if (obj == null) { throw new Exception ("Cant inject null instance."); }
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4F0C344884FC9B83B4A2A736DE917C41C17AF206)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Inject_mDB2C8962A0F764B113EE74E30C16531B39B67849_RuntimeMethod_var)));
	}

IL_002b:
	{
		// if (overridenType != null && !overridenType.IsInstanceOfType (obj)) { throw new Exception ("Invalid overriden type."); }
		Type_t * L_6 = ___overridenType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_6, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		Type_t * L_8 = ___overridenType1;
		RuntimeObject * L_9 = ___obj0;
		bool L_10;
		L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(104 /* System.Boolean System.Type::IsInstanceOfType(System.Object) */, L_8, L_9);
		G_B7_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B7_0 = 0;
	}

IL_0041:
	{
		V_2 = (bool)G_B7_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		// if (overridenType != null && !overridenType.IsInstanceOfType (obj)) { throw new Exception ("Invalid overriden type."); }
		Exception_t * L_12 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE5BF82CEA932C3DA6E3DCA5F71AC5CC36746C870)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Inject_mDB2C8962A0F764B113EE74E30C16531B39B67849_RuntimeMethod_var)));
	}

IL_0051:
	{
		// if (overridenType == null) {
		Type_t * L_13 = ___overridenType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_13, (Type_t *)NULL, /*hidden argument*/NULL);
		V_3 = L_14;
		bool L_15 = V_3;
		if (!L_15)
		{
			goto IL_0066;
		}
	}
	{
		// overridenType = obj.GetType ();
		RuntimeObject * L_16 = ___obj0;
		Type_t * L_17;
		L_17 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_16, /*hidden argument*/NULL);
		___overridenType1 = L_17;
	}

IL_0066:
	{
		// _injections[overridenType] = obj;
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_18 = __this->get__injections_5();
		Type_t * L_19 = ___overridenType1;
		RuntimeObject * L_20 = ___obj0;
		Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4(L_18, L_19, L_20, /*hidden argument*/Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		// return this;
		V_4 = __this;
		goto IL_0079;
	}

IL_0079:
	{
		// }
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_21 = V_4;
		return L_21;
	}
}
// Leopotam.Ecs.EcsSystems Leopotam.Ecs.EcsSystems::ProcessInjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * V_5 = NULL;
	bool V_6 = false;
	Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  V_7;
	memset((&V_7), 0, sizeof(V_7));
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * V_10 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		bool L_0 = __this->get__initialized_7();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Cant inject after initialization."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6FC4420D546F38081E27458A6B155EA0E2FBBA4D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_3 = __this->get__destroyed_8();
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B_RuntimeMethod_var)));
	}

IL_002d:
	{
		// if (!_injected) {
		bool L_6 = __this->get__injected_6();
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_010a;
		}
	}
	{
		// _injected = true;
		__this->set__injected_6((bool)1);
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_3 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_8 = __this->get__allSystems_2();
		int32_t L_9 = L_8->get_Count_1();
		V_4 = L_9;
		goto IL_00fb;
	}

IL_0059:
	{
		// if (_allSystems.Items[i] is EcsSystems nestedSystems) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_10 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_11 = L_10->get_Items_0();
		int32_t L_12 = V_3;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = ((EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 *)IsInstSealed((RuntimeObject*)L_14, EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639_il2cpp_TypeInfo_var));
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_15 = V_5;
		V_6 = (bool)((!(((RuntimeObject*)(EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 *)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_00d5;
		}
	}
	{
		// foreach (var pair in _injections) {
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_17 = __this->get__injections_5();
		Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  L_18;
		L_18 = Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE(L_17, /*hidden argument*/Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		V_7 = L_18;
	}

IL_0088:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b0;
		}

IL_008a:
		{
			// foreach (var pair in _injections) {
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_19;
			L_19 = Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_inline((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_7), /*hidden argument*/Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
			V_8 = L_19;
			// nestedSystems._injections[pair.Key] = pair.Value;
			EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_20 = V_5;
			Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_21 = L_20->get__injections_5();
			Type_t * L_22;
			L_22 = KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
			RuntimeObject * L_23;
			L_23 = KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_8), /*hidden argument*/KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
			Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4(L_21, L_22, L_23, /*hidden argument*/Dictionary_2_set_Item_mE2075284387070D3A7A5270060B7B73B1FB6C9F4_RuntimeMethod_var);
		}

IL_00b0:
		{
			// foreach (var pair in _injections) {
			bool L_24;
			L_24 = Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_008a;
			}
		}

IL_00b9:
		{
			IL2CPP_LEAVE(0xCA, FINALLY_00bb);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bb;
	}

FINALLY_00bb:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_7), /*hidden argument*/Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		IL2CPP_END_FINALLY(187)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(187)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
	}

IL_00ca:
	{
		// nestedSystems.ProcessInjects ();
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_25 = V_5;
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_26;
		L_26 = EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B(L_25, /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00d5:
	{
		// InjectDataToSystem (_allSystems.Items[i], World, _injections);
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_27 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_28 = L_27->get_Items_0();
		int32_t L_29 = V_3;
		int32_t L_30 = L_29;
		RuntimeObject* L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_32 = __this->get_World_1();
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_33 = __this->get__injections_5();
		EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688(L_31, L_32, L_33, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_34 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1));
	}

IL_00fb:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_35 = V_3;
		int32_t L_36 = V_4;
		V_9 = (bool)((((int32_t)L_35) < ((int32_t)L_36))? 1 : 0);
		bool L_37 = V_9;
		if (L_37)
		{
			goto IL_0059;
		}
	}
	{
	}

IL_010a:
	{
		// return this;
		V_10 = __this;
		goto IL_010f;
	}

IL_010f:
	{
		// }
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_38 = V_10;
		return L_38;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Init_mBBE3BC3106291DE2CD50F401210E492280FD4879 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B75DBAF67E4FF20F08D39DC9C8BA76DFA05C0AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A6D6805DD57E5756D9C4E976A28536E727965A2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	bool V_12 = false;
	bool V_13 = false;
	{
		// if (_initialized) { throw new Exception ("Already initialized."); }
		bool L_0 = __this->get__initialized_7();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_initialized) { throw new Exception ("Already initialized."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral25A4FBE3BF5562DC866CA4DA98C373F38B573C74)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Init_mBBE3BC3106291DE2CD50F401210E492280FD4879_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_3 = __this->get__destroyed_8();
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Init_mBBE3BC3106291DE2CD50F401210E492280FD4879_RuntimeMethod_var)));
	}

IL_002d:
	{
		// ProcessInjects ();
		EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * L_6;
		L_6 = EcsSystems_ProcessInjects_mB32C8893B8E2B0AE75AE6743D52138BDE3615E0B(__this, /*hidden argument*/NULL);
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_7 = __this->get__allSystems_2();
		int32_t L_8 = L_7->get_Count_1();
		V_3 = L_8;
		goto IL_0099;
	}

IL_0044:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_9 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_10 = L_9->get_Items_0();
		int32_t L_11 = V_2;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		// if (system is IEcsPreInitSystem preInitSystem) {
		RuntimeObject* L_14 = V_4;
		V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var));
		RuntimeObject* L_15 = V_5;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_15) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		// preInitSystem.PreInit ();
		RuntimeObject* L_17 = V_5;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPreInitSystem::PreInit() */, IEcsPreInitSystem_t347F7B1C6BAB7A50913208313A897706A93A8294_il2cpp_TypeInfo_var, L_17);
		// World.CheckForLeakedEntities ($"{preInitSystem.GetType ().Name}.PreInit()");
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_18 = __this->get_World_1();
		RuntimeObject* L_19 = V_5;
		Type_t * L_20;
		L_20 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_19, /*hidden argument*/NULL);
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_20);
		String_t* L_22;
		L_22 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_21, _stringLiteral4B75DBAF67E4FF20F08D39DC9C8BA76DFA05C0AA, /*hidden argument*/NULL);
		bool L_23;
		L_23 = EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78(L_18, L_22, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0099:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		V_7 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_7;
		if (L_27)
		{
			goto IL_0044;
		}
	}
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		V_8 = 0;
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_28 = __this->get__allSystems_2();
		int32_t L_29 = L_28->get_Count_1();
		V_9 = L_29;
		goto IL_010d;
	}

IL_00b5:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_30 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_31 = L_30->get_Items_0();
		int32_t L_32 = V_8;
		int32_t L_33 = L_32;
		RuntimeObject* L_34 = (L_31)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_33));
		V_10 = L_34;
		// if (system is IEcsInitSystem initSystem) {
		RuntimeObject* L_35 = V_10;
		V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_35, IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var));
		RuntimeObject* L_36 = V_11;
		V_12 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_36) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_37 = V_12;
		if (!L_37)
		{
			goto IL_0106;
		}
	}
	{
		// initSystem.Init ();
		RuntimeObject* L_38 = V_11;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsInitSystem::Init() */, IEcsInitSystem_t1D76655B71D3C0E3CA20AFCACA67747DCB0B4EF6_il2cpp_TypeInfo_var, L_38);
		// World.CheckForLeakedEntities ($"{initSystem.GetType ().Name}.Init()");
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_39 = __this->get_World_1();
		RuntimeObject* L_40 = V_11;
		Type_t * L_41;
		L_41 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_40, /*hidden argument*/NULL);
		String_t* L_42;
		L_42 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_41);
		String_t* L_43;
		L_43 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_42, _stringLiteral6A6D6805DD57E5756D9C4E976A28536E727965A2, /*hidden argument*/NULL);
		bool L_44;
		L_44 = EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78(L_39, L_43, /*hidden argument*/NULL);
	}

IL_0106:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_45 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_010d:
	{
		// for (int i = 0, iMax = _allSystems.Count; i < iMax; i++) {
		int32_t L_46 = V_8;
		int32_t L_47 = V_9;
		V_13 = (bool)((((int32_t)L_46) < ((int32_t)L_47))? 1 : 0);
		bool L_48 = V_13;
		if (L_48)
		{
			goto IL_00b5;
		}
	}
	{
		// _initialized = true;
		__this->set__initialized_7((bool)1);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Run_mE471860F775B875F25F462737C5FEB5563458666 (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	{
		// if (!_initialized) { throw new Exception ($"[{Name ?? "NONAME"}] EcsSystems should be initialized before."); }
		bool L_0 = __this->get__initialized_7();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		// if (!_initialized) { throw new Exception ($"[{Name ?? "NONAME"}] EcsSystems should be initialized before."); }
		String_t* L_2 = __this->get_Name_0();
		String_t* L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1));
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1));
			goto IL_0023;
		}
	}
	{
		G_B3_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAA66ED9C74A8CE529E01D730BA97D57E57A34F95));
		G_B3_1 = G_B2_1;
	}

IL_0023:
	{
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(G_B3_1, G_B3_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA906DC2DAC00369EDB944E99FDB0C529B1279531)), /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Run_mE471860F775B875F25F462737C5FEB5563458666_RuntimeMethod_var)));
	}

IL_0033:
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		bool L_6 = __this->get__destroyed_8();
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Cant touch after destroy."); }
		Exception_t * L_8 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4EB64A3A13534D8009CFBAF7571370DD449066FD)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Run_mE471860F775B875F25F462737C5FEB5563458666_RuntimeMethod_var)));
	}

IL_0049:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_9 = __this->get__runSystems_3();
		int32_t L_10 = L_9->get_Count_1();
		V_3 = L_10;
		goto IL_00c9;
	}

IL_0059:
	{
		// var runItem = _runSystems.Items[i];
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_11 = __this->get__runSystems_3();
		EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* L_12 = L_11->get_Items_0();
		int32_t L_13 = V_2;
		int32_t L_14 = L_13;
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		// if (runItem.Active) {
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_16 = V_4;
		bool L_17 = L_16->get_Active_0();
		V_5 = L_17;
		bool L_18 = V_5;
		if (!L_18)
		{
			goto IL_0085;
		}
	}
	{
		// runItem.System.Run ();
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_19 = V_4;
		RuntimeObject* L_20 = L_19->get_System_1();
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsRunSystem::Run() */, IEcsRunSystem_tDBF8FF7D76556B6C9AE0E91A29E4BF75AC446328_il2cpp_TypeInfo_var, L_20);
	}

IL_0085:
	{
		// if (World.CheckForLeakedEntities (null)) {
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_21 = __this->get_World_1();
		bool L_22;
		L_22 = EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78(L_21, (String_t*)NULL, /*hidden argument*/NULL);
		V_6 = L_22;
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00c4;
		}
	}
	{
		// throw new Exception ($"Empty entity detected, possible memory leak in {_runSystems.Items[i].GetType ().Name}.Run ()");
		EcsGrowList_1_t10817513B1D553BDEAD59C4DB57002BA4CEF5E5F * L_24 = __this->get__runSystems_3();
		EcsSystemsRunItemU5BU5D_tF6BE32625E55042A8E350FAF6137223D7866B5F7* L_25 = L_24->get_Items_0();
		int32_t L_26 = V_2;
		int32_t L_27 = L_26;
		EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		Type_t * L_29;
		L_29 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_29);
		String_t* L_31;
		L_31 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6A593CE8065C964E88607664A02F0AC49384C3FA)), L_30, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral526364499B42E287EE096D7EA2B6D87A51289D0E)), /*hidden argument*/NULL);
		Exception_t * L_32 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_32, L_31, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Run_mE471860F775B875F25F462737C5FEB5563458666_RuntimeMethod_var)));
	}

IL_00c4:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		int32_t L_33 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00c9:
	{
		// for (int i = 0, iMax = _runSystems.Count; i < iMax; i++) {
		int32_t L_34 = V_2;
		int32_t L_35 = V_3;
		V_7 = (bool)((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		bool L_36 = V_7;
		if (L_36)
		{
			goto IL_0059;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_Destroy_mBF2CB72BCAA487DF99C431A7945E78C22E6E328E (EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsSystemsDebugListener_tC81877BA2DF323E689B93F302777AEA879F5E1E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFEA474E0031887519BF6C609D948C4032DBA7719_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m4CBE152E035FD37F272E4F1AF7243136FA4F73FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65C50EE4F514C906B18B5B9D555024AA24DD14E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE79A84F0C410242A95761BE689BB0C77471F1A4);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	bool V_13 = false;
	{
		// if (_destroyed) { throw new Exception ("Already destroyed."); }
		bool L_0 = __this->get__destroyed_8();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (_destroyed) { throw new Exception ("Already destroyed."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6ECE305DF9F97A39845FE33E7F8ECEDE4CAC75C1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_Destroy_mBF2CB72BCAA487DF99C431A7945E78C22E6E328E_RuntimeMethod_var)));
	}

IL_0017:
	{
		// _destroyed = true;
		__this->set__destroyed_8((bool)1);
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_3 = __this->get__allSystems_2();
		int32_t L_4 = L_3->get_Count_1();
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		goto IL_007d;
	}

IL_002e:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_5 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_6 = L_5->get_Items_0();
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if (system is IEcsDestroySystem destroySystem) {
		RuntimeObject* L_10 = V_2;
		V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var));
		RuntimeObject* L_11 = V_3;
		V_4 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0078;
		}
	}
	{
		// destroySystem.Destroy ();
		RuntimeObject* L_13 = V_3;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsDestroySystem::Destroy() */, IEcsDestroySystem_t9B4866CBA342A0BEAA4FABF60776407862E35C70_il2cpp_TypeInfo_var, L_13);
		// World.CheckForLeakedEntities ($"{destroySystem.GetType ().Name}.Destroy ()");
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_14 = __this->get_World_1();
		RuntimeObject* L_15 = V_3;
		Type_t * L_16;
		L_16 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_15, /*hidden argument*/NULL);
		String_t* L_17;
		L_17 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_17, _stringLiteralFE79A84F0C410242A95761BE689BB0C77471F1A4, /*hidden argument*/NULL);
		bool L_19;
		L_19 = EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78(L_14, L_18, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1));
	}

IL_007d:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_21 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_002e;
		}
	}
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_23 = __this->get__allSystems_2();
		int32_t L_24 = L_23->get_Count_1();
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1));
		goto IL_00f3;
	}

IL_009b:
	{
		// var system = _allSystems.Items[i];
		EcsGrowList_1_tCF2C84C541714096E7C033877D48221CDC9CF738 * L_25 = __this->get__allSystems_2();
		IEcsSystemU5BU5D_tB863949F0E164F7D8125D2E29B4647F221D76128* L_26 = L_25->get_Items_0();
		int32_t L_27 = V_6;
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		V_7 = L_29;
		// if (system is IEcsPostDestroySystem postDestroySystem) {
		RuntimeObject* L_30 = V_7;
		V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_30, IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var));
		RuntimeObject* L_31 = V_8;
		V_9 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_31) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00ec;
		}
	}
	{
		// postDestroySystem.PostDestroy ();
		RuntimeObject* L_33 = V_8;
		InterfaceActionInvoker0::Invoke(0 /* System.Void Leopotam.Ecs.IEcsPostDestroySystem::PostDestroy() */, IEcsPostDestroySystem_t4AA43503D6D25CE3DFB88747E9A374F929CBE40D_il2cpp_TypeInfo_var, L_33);
		// World.CheckForLeakedEntities ($"{postDestroySystem.GetType ().Name}.PostDestroy ()");
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_34 = __this->get_World_1();
		RuntimeObject* L_35 = V_8;
		Type_t * L_36;
		L_36 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_35, /*hidden argument*/NULL);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_36);
		String_t* L_38;
		L_38 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_37, _stringLiteral65C50EE4F514C906B18B5B9D555024AA24DD14E4, /*hidden argument*/NULL);
		bool L_39;
		L_39 = EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78(L_34, L_38, /*hidden argument*/NULL);
	}

IL_00ec:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_40 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1));
	}

IL_00f3:
	{
		// for (var i = _allSystems.Count - 1; i >= 0; i--) {
		int32_t L_41 = V_6;
		V_10 = (bool)((((int32_t)((((int32_t)L_41) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_10;
		if (L_42)
		{
			goto IL_009b;
		}
	}
	{
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		V_11 = 0;
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * L_43 = __this->get__debugListeners_9();
		int32_t L_44;
		L_44 = List_1_get_Count_mFEA474E0031887519BF6C609D948C4032DBA7719_inline(L_43, /*hidden argument*/List_1_get_Count_mFEA474E0031887519BF6C609D948C4032DBA7719_RuntimeMethod_var);
		V_12 = L_44;
		goto IL_012f;
	}

IL_0113:
	{
		// _debugListeners[i].OnSystemsDestroyed (this);
		List_1_t8FEADB1B735091159FA1EB674193AACD99F1E970 * L_45 = __this->get__debugListeners_9();
		int32_t L_46 = V_11;
		RuntimeObject* L_47;
		L_47 = List_1_get_Item_m4CBE152E035FD37F272E4F1AF7243136FA4F73FC_inline(L_45, L_46, /*hidden argument*/List_1_get_Item_m4CBE152E035FD37F272E4F1AF7243136FA4F73FC_RuntimeMethod_var);
		InterfaceActionInvoker1< EcsSystems_tB560441913816AE1F0D16F53F876AFEA96E36639 * >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsSystemsDebugListener::OnSystemsDestroyed(Leopotam.Ecs.EcsSystems) */, IEcsSystemsDebugListener_tC81877BA2DF323E689B93F302777AEA879F5E1E8_il2cpp_TypeInfo_var, L_47, __this);
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		int32_t L_48 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_012f:
	{
		// for (int i = 0, iMax = _debugListeners.Count; i < iMax; i++) {
		int32_t L_49 = V_11;
		int32_t L_50 = V_12;
		V_13 = (bool)((((int32_t)L_49) < ((int32_t)L_50))? 1 : 0);
		bool L_51 = V_13;
		if (L_51)
		{
			goto IL_0113;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsSystems::InjectDataToSystem(Leopotam.Ecs.IEcsSystem,Leopotam.Ecs.EcsWorld,System.Collections.Generic.Dictionary`2<System.Type,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688 (RuntimeObject* ___system0, EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * ___world1, Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ___injections2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	Type_t * V_3 = NULL;
	FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* V_4 = NULL;
	int32_t V_5 = 0;
	FieldInfo_t * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  V_11;
	memset((&V_11), 0, sizeof(V_11));
	KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B4_0 = 0;
	{
		// var systemType = system.GetType ();
		RuntimeObject* L_0 = ___system0;
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var worldType = world.GetType ();
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_2 = ___world1;
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var filterType = typeof (EcsFilter);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// var ignoreType = typeof (EcsIgnoreInjectAttribute);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (EcsIgnoreInjectAttribute_t4A01E296BA2C15FFD024CF2D26858BBE98616068_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		Type_t * L_8 = V_0;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_9;
		L_9 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(43 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_8, ((int32_t)52));
		V_4 = L_9;
		V_5 = 0;
		goto IL_0138;
	}

IL_0038:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_10 = V_4;
		int32_t L_11 = V_5;
		int32_t L_12 = L_11;
		FieldInfo_t * L_13 = (L_10)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_12));
		V_6 = L_13;
		// if (f.IsStatic || Attribute.IsDefined (f, ignoreType)) {
		FieldInfo_t * L_14 = V_6;
		bool L_15;
		L_15 = FieldInfo_get_IsStatic_mE36F3A5B2DFF613C704AA56989D90D72760391EB(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0053;
		}
	}
	{
		FieldInfo_t * L_16 = V_6;
		Type_t * L_17 = V_3;
		bool L_18;
		L_18 = Attribute_IsDefined_mD3B7688B216A0B4EBD238B82E9E8DA0E0E9308CB(L_16, L_17, /*hidden argument*/NULL);
		G_B4_0 = ((int32_t)(L_18));
		goto IL_0054;
	}

IL_0053:
	{
		G_B4_0 = 1;
	}

IL_0054:
	{
		V_7 = (bool)G_B4_0;
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0060;
		}
	}
	{
		// continue;
		goto IL_0132;
	}

IL_0060:
	{
		// if (f.FieldType.IsAssignableFrom (worldType)) {
		FieldInfo_t * L_20 = V_6;
		Type_t * L_21;
		L_21 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_20);
		Type_t * L_22 = V_1;
		bool L_23;
		L_23 = VirtFuncInvoker1< bool, Type_t * >::Invoke(105 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_21, L_22);
		V_8 = L_23;
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_0083;
		}
	}
	{
		// f.SetValue (system, world);
		FieldInfo_t * L_25 = V_6;
		RuntimeObject* L_26 = ___system0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_27 = ___world1;
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_25, L_26, L_27, /*hidden argument*/NULL);
		// continue;
		goto IL_0132;
	}

IL_0083:
	{
		// if (f.FieldType == filterType) {
		FieldInfo_t * L_28 = V_6;
		Type_t * L_29;
		L_29 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_28);
		Type_t * L_30 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_29, L_30, /*hidden argument*/NULL);
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00a8;
		}
	}
	{
		// throw new Exception ($"Cant use EcsFilter type at \"{system}\" system for dependency injection, use generic version instead");
		RuntimeObject* L_33 = ___system0;
		String_t* L_34;
		L_34 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CB6CBAEFB707D790B1CB2ED0E4DEF2AB92D4CA7)), L_33, /*hidden argument*/NULL);
		Exception_t * L_35 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_35, L_34, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsSystems_InjectDataToSystem_mE5A6FB3F02C51C77598C116498AEBE067F610688_RuntimeMethod_var)));
	}

IL_00a8:
	{
		// if (f.FieldType.IsSubclassOf (filterType)) {
		FieldInfo_t * L_36 = V_6;
		Type_t * L_37;
		L_37 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_36);
		Type_t * L_38 = V_2;
		bool L_39;
		L_39 = VirtFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_37, L_38);
		V_10 = L_39;
		bool L_40 = V_10;
		if (!L_40)
		{
			goto IL_00d5;
		}
	}
	{
		// f.SetValue (system, world.GetFilter (f.FieldType));
		FieldInfo_t * L_41 = V_6;
		RuntimeObject* L_42 = ___system0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_43 = ___world1;
		FieldInfo_t * L_44 = V_6;
		Type_t * L_45;
		L_45 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_44);
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_46;
		L_46 = EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3(L_43, L_45, (bool)1, /*hidden argument*/NULL);
		FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_41, L_42, L_46, /*hidden argument*/NULL);
		// continue;
		goto IL_0132;
	}

IL_00d5:
	{
		// foreach (var pair in injections) {
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_47 = ___injections2;
		Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF  L_48;
		L_48 = Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE(L_47, /*hidden argument*/Dictionary_2_GetEnumerator_mB15B8EFE0700B5A0F1FA6C8377F708BD174345CE_RuntimeMethod_var);
		V_11 = L_48;
	}

IL_00de:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0117;
		}

IL_00e0:
		{
			// foreach (var pair in injections) {
			KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A  L_49;
			L_49 = Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_inline((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_11), /*hidden argument*/Enumerator_get_Current_mD5694A19FC89465B355D0A4FC78A208A7AC94B59_RuntimeMethod_var);
			V_12 = L_49;
			// if (f.FieldType.IsAssignableFrom (pair.Key)) {
			FieldInfo_t * L_50 = V_6;
			Type_t * L_51;
			L_51 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_50);
			Type_t * L_52;
			L_52 = KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Key_mFC414156302A0802E5AFBCA80AB66D875D128853_RuntimeMethod_var);
			bool L_53;
			L_53 = VirtFuncInvoker1< bool, Type_t * >::Invoke(105 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_51, L_52);
			V_13 = L_53;
			bool L_54 = V_13;
			if (!L_54)
			{
				goto IL_0116;
			}
		}

IL_0103:
		{
			// f.SetValue (system, pair.Value);
			FieldInfo_t * L_55 = V_6;
			RuntimeObject* L_56 = ___system0;
			RuntimeObject * L_57;
			L_57 = KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_inline((KeyValuePair_2_tB392B9953076F107A63FA3F294046245C5F7CE7A *)(&V_12), /*hidden argument*/KeyValuePair_2_get_Value_m6E5EEEA70F5AB7D64A6A826A34FB92028A4E2C0E_RuntimeMethod_var);
			FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_55, L_56, L_57, /*hidden argument*/NULL);
			// break;
			goto IL_0120;
		}

IL_0116:
		{
		}

IL_0117:
		{
			// foreach (var pair in injections) {
			bool L_58;
			L_58 = Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_11), /*hidden argument*/Enumerator_MoveNext_mF97510AE1F08FF0CD77278BF64B220D6E9E3E985_RuntimeMethod_var);
			if (L_58)
			{
				goto IL_00e0;
			}
		}

IL_0120:
		{
			IL2CPP_LEAVE(0x131, FINALLY_0122);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0122;
	}

FINALLY_0122:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515((Enumerator_tA4440C83A864A67413E6DF0046154D0A3B3E5ECF *)(&V_11), /*hidden argument*/Enumerator_Dispose_m3B9B6CC02DA603BC9377AD07FEF77358C14BD515_RuntimeMethod_var);
		IL2CPP_END_FINALLY(290)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(290)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x131, IL_0131)
	}

IL_0131:
	{
	}

IL_0132:
	{
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0138:
	{
		// foreach (var f in systemType.GetFields (BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance)) {
		int32_t L_60 = V_5;
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_61 = V_4;
		if ((((int32_t)L_60) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_61)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.Ecs.EcsSystemsRunItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsSystemsRunItem__ctor_m5846EA79A00CF9DB479DB3B43ED8BF75574A0152 (EcsSystemsRunItem_t574B9E304C2E4EA1D25FC1CC15394455A7873C9C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Leopotam.Ecs.EcsWorld::.ctor(Leopotam.Ecs.EcsWorldConfig)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld__ctor_m2BE24B6963818E96F65759EF11C7BD584084DB6F (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8912F67D79EA3CD43A4CDFE9C1A42130A9C93A9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B2_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B3_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B5_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B6_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B8_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B9_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B11_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B10_0 = NULL;
	int32_t G_B12_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B12_1 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B14_0 = NULL;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B13_0 = NULL;
	int32_t G_B15_0 = 0;
	EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * G_B15_1 = NULL;
	{
		// internal readonly List<IEcsWorldDebugListener> DebugListeners = new List<IEcsWorldDebugListener> (4);
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_0 = (List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E *)il2cpp_codegen_object_new(List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E_il2cpp_TypeInfo_var);
		List_1__ctor_m8912F67D79EA3CD43A4CDFE9C1A42130A9C93A9F(L_0, 4, /*hidden argument*/List_1__ctor_m8912F67D79EA3CD43A4CDFE9C1A42130A9C93A9F_RuntimeMethod_var);
		__this->set_DebugListeners_11(L_0);
		// readonly EcsGrowList<EcsEntity> _leakedEntities = new EcsGrowList<EcsEntity> (256);
		EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * L_1 = (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F *)il2cpp_codegen_object_new(EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_inline(L_1, ((int32_t)256), /*hidden argument*/EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_RuntimeMethod_var);
		__this->set__leakedEntities_12(L_1);
		// public EcsWorld (EcsWorldConfig config = default) {
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// var finalConfig = new EcsWorldConfig {
		//     EntityComponentsCacheSize = config.EntityComponentsCacheSize <= 0
		//         ? EcsWorldConfig.DefaultEntityComponentsCacheSize
		//         : config.EntityComponentsCacheSize,
		//     FilterEntitiesCacheSize = config.FilterEntitiesCacheSize <= 0
		//         ? EcsWorldConfig.DefaultFilterEntitiesCacheSize
		//         : config.FilterEntitiesCacheSize,
		//     WorldEntitiesCacheSize = config.WorldEntitiesCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldEntitiesCacheSize
		//         : config.WorldEntitiesCacheSize,
		//     WorldFiltersCacheSize = config.WorldFiltersCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldFiltersCacheSize
		//         : config.WorldFiltersCacheSize,
		//     WorldComponentPoolsCacheSize = config.WorldComponentPoolsCacheSize <= 0
		//         ? EcsWorldConfig.DefaultWorldComponentPoolsCacheSize
		//         : config.WorldComponentPoolsCacheSize
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A ));
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_2 = ___config0;
		int32_t L_3 = L_2.get_EntityComponentsCacheSize_3();
		G_B1_0 = (&V_1);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			G_B2_0 = (&V_1);
			goto IL_003f;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_4 = ___config0;
		int32_t L_5 = L_4.get_EntityComponentsCacheSize_3();
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0040;
	}

IL_003f:
	{
		G_B3_0 = 8;
		G_B3_1 = G_B2_0;
	}

IL_0040:
	{
		G_B3_1->set_EntityComponentsCacheSize_3(G_B3_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_6 = ___config0;
		int32_t L_7 = L_6.get_FilterEntitiesCacheSize_4();
		G_B4_0 = (&V_1);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			G_B5_0 = (&V_1);
			goto IL_0058;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_8 = ___config0;
		int32_t L_9 = L_8.get_FilterEntitiesCacheSize_4();
		G_B6_0 = L_9;
		G_B6_1 = G_B4_0;
		goto IL_005d;
	}

IL_0058:
	{
		G_B6_0 = ((int32_t)256);
		G_B6_1 = G_B5_0;
	}

IL_005d:
	{
		G_B6_1->set_FilterEntitiesCacheSize_4(G_B6_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_10 = ___config0;
		int32_t L_11 = L_10.get_WorldEntitiesCacheSize_0();
		G_B7_0 = (&V_1);
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			G_B8_0 = (&V_1);
			goto IL_0075;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_12 = ___config0;
		int32_t L_13 = L_12.get_WorldEntitiesCacheSize_0();
		G_B9_0 = L_13;
		G_B9_1 = G_B7_0;
		goto IL_007a;
	}

IL_0075:
	{
		G_B9_0 = ((int32_t)1024);
		G_B9_1 = G_B8_0;
	}

IL_007a:
	{
		G_B9_1->set_WorldEntitiesCacheSize_0(G_B9_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_14 = ___config0;
		int32_t L_15 = L_14.get_WorldFiltersCacheSize_1();
		G_B10_0 = (&V_1);
		if ((((int32_t)L_15) <= ((int32_t)0)))
		{
			G_B11_0 = (&V_1);
			goto IL_0092;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_16 = ___config0;
		int32_t L_17 = L_16.get_WorldFiltersCacheSize_1();
		G_B12_0 = L_17;
		G_B12_1 = G_B10_0;
		goto IL_0097;
	}

IL_0092:
	{
		G_B12_0 = ((int32_t)128);
		G_B12_1 = G_B11_0;
	}

IL_0097:
	{
		G_B12_1->set_WorldFiltersCacheSize_1(G_B12_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_18 = ___config0;
		int32_t L_19 = L_18.get_WorldComponentPoolsCacheSize_2();
		G_B13_0 = (&V_1);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			G_B14_0 = (&V_1);
			goto IL_00af;
		}
	}
	{
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_20 = ___config0;
		int32_t L_21 = L_20.get_WorldComponentPoolsCacheSize_2();
		G_B15_0 = L_21;
		G_B15_1 = G_B13_0;
		goto IL_00b4;
	}

IL_00af:
	{
		G_B15_0 = ((int32_t)512);
		G_B15_1 = G_B14_0;
	}

IL_00b4:
	{
		G_B15_1->set_WorldComponentPoolsCacheSize_2(G_B15_0);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_22 = V_1;
		V_0 = L_22;
		// Config = finalConfig;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A  L_23 = V_0;
		__this->set_Config_7(L_23);
		// Entities = new EcsEntityData[Config.WorldEntitiesCacheSize];
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_24 = __this->get_address_of_Config_7();
		int32_t L_25 = L_24->get_WorldEntitiesCacheSize_0();
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_26 = (EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8*)(EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8*)SZArrayNew(EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8_il2cpp_TypeInfo_var, (uint32_t)L_25);
		__this->set_Entities_0(L_26);
		// FreeEntities = new EcsGrowList<int> (Config.WorldEntitiesCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_27 = __this->get_address_of_Config_7();
		int32_t L_28 = L_27->get_WorldEntitiesCacheSize_0();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_29 = (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A *)il2cpp_codegen_object_new(EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_inline(L_29, L_28, /*hidden argument*/EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_RuntimeMethod_var);
		__this->set_FreeEntities_2(L_29);
		// Filters = new EcsGrowList<EcsFilter> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_30 = __this->get_address_of_Config_7();
		int32_t L_31 = L_30->get_WorldFiltersCacheSize_1();
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_32 = (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *)il2cpp_codegen_object_new(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline(L_32, L_31, /*hidden argument*/EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		__this->set_Filters_3(L_32);
		// FilterByIncludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_33 = __this->get_address_of_Config_7();
		int32_t L_34 = L_33->get_WorldFiltersCacheSize_1();
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_35 = (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *)il2cpp_codegen_object_new(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35(L_35, L_34, /*hidden argument*/Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var);
		__this->set_FilterByIncludedComponents_4(L_35);
		// FilterByExcludedComponents = new Dictionary<int, EcsGrowList<EcsFilter>> (Config.WorldFiltersCacheSize);
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_36 = __this->get_address_of_Config_7();
		int32_t L_37 = L_36->get_WorldFiltersCacheSize_1();
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_38 = (Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 *)il2cpp_codegen_object_new(Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35(L_38, L_37, /*hidden argument*/Dictionary_2__ctor_mA3AB884B34B6067084125272D79C72F628CE3B35_RuntimeMethod_var);
		__this->set_FilterByExcludedComponents_5(L_38);
		// ComponentPools = new IEcsComponentPool[Config.WorldComponentPoolsCacheSize];
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_39 = __this->get_address_of_Config_7();
		int32_t L_40 = L_39->get_WorldComponentPoolsCacheSize_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_41 = (IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1*)(IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1*)SZArrayNew(IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1_il2cpp_TypeInfo_var, (uint32_t)L_40);
		__this->set_ComponentPools_9(L_41);
		// _filterCtor = new object[] { this };
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_42 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_43 = L_42;
		ArrayElementTypeCheck (L_43, __this);
		(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)__this);
		__this->set__filterCtor_8(L_43);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::AddDebugListener(Leopotam.Ecs.IEcsWorldDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_AddDebugListener_mA5BC1C920D3DAFB91079D19C2B1EA1FBFF3971C3 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCF11A73514FD51E426C6ADD1356E602779D883C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57D91E963C1256046C939886D4EF47C540C197E2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_AddDebugListener_mA5BC1C920D3DAFB91079D19C2B1EA1FBFF3971C3_RuntimeMethod_var)));
	}

IL_0015:
	{
		// DebugListeners.Add (listener);
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_3 = __this->get_DebugListeners_11();
		RuntimeObject* L_4 = ___listener0;
		List_1_Add_mCF11A73514FD51E426C6ADD1356E602779D883C7(L_3, L_4, /*hidden argument*/List_1_Add_mCF11A73514FD51E426C6ADD1356E602779D883C7_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::RemoveDebugListener(Leopotam.Ecs.IEcsWorldDebugListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RemoveDebugListener_m062E1F4C567EDF7D310F1B4A5BAEC578E79B1A9B (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, RuntimeObject* ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mD8752D6D268BFED6016DC80D946A869ED0B6D9E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		RuntimeObject* L_0 = ___listener0;
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (listener == null) { throw new Exception ("Listener is null."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral57D91E963C1256046C939886D4EF47C540C197E2)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_RemoveDebugListener_m062E1F4C567EDF7D310F1B4A5BAEC578E79B1A9B_RuntimeMethod_var)));
	}

IL_0015:
	{
		// DebugListeners.Remove (listener);
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_3 = __this->get_DebugListeners_11();
		RuntimeObject* L_4 = ___listener0;
		bool L_5;
		L_5 = List_1_Remove_mD8752D6D268BFED6016DC80D946A869ED0B6D9E1(L_3, L_4, /*hidden argument*/List_1_Remove_mD8752D6D268BFED6016DC80D946A869ED0B6D9E1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_Destroy_m2C0414D8905D963ECED938FE60827053C11F5EFD (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	int32_t G_B3_0 = 0;
	{
		// if (IsDestroyed || _inDestroying) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->get_IsDestroyed_10();
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->get__inDestroying_13();
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (IsDestroyed || _inDestroying) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_Destroy_m2C0414D8905D963ECED938FE60827053C11F5EFD_RuntimeMethod_var)));
	}

IL_0022:
	{
		// _inDestroying = true;
		__this->set__inDestroying_13((bool)1);
		// CheckForLeakedEntities ("Destroy");
		bool L_4;
		L_4 = EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78(__this, _stringLiteral5E60BFB9BB233C2EFEEE045F37B1E64647148979, /*hidden argument*/NULL);
		// entity.Owner = this;
		(&V_0)->set_Owner_2(__this);
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_5 = __this->get_EntitiesCount_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		goto IL_0089;
	}

IL_0048:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_6 = __this->get_Entities_0();
		int32_t L_7 = V_2;
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7)));
		// if (entityData.ComponentsCountX2 > 0) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_8 = V_3;
		int16_t L_9 = L_8->get_ComponentsCountX2_1();
		V_4 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0084;
		}
	}
	{
		// entity.Id = i;
		int32_t L_11 = V_2;
		(&V_0)->set_Id_0(L_11);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_12 = V_3;
		uint16_t L_13 = L_12->get_Gen_0();
		(&V_0)->set_Gen_1(L_13);
		// entity.Destroy ();
		EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_0), /*hidden argument*/NULL);
	}

IL_0084:
	{
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)1));
	}

IL_0089:
	{
		// for (var i = EntitiesCount - 1; i >= 0; i--) {
		int32_t L_15 = V_2;
		V_5 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0048;
		}
	}
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		V_6 = 0;
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_17 = __this->get_Filters_3();
		int32_t L_18 = L_17->get_Count_1();
		V_7 = L_18;
		goto IL_00c4;
	}

IL_00a8:
	{
		// Filters.Items[i].Destroy ();
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_19 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_20 = L_19->get_Items_0();
		int32_t L_21 = V_6;
		int32_t L_22 = L_21;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		VirtActionInvoker0::Invoke(4 /* System.Void Leopotam.Ecs.EcsFilter::Destroy() */, L_23);
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_00c4:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_25 = V_6;
		int32_t L_26 = V_7;
		V_8 = (bool)((((int32_t)L_25) < ((int32_t)L_26))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_00a8;
		}
	}
	{
		// IsDestroyed = true;
		__this->set_IsDestroyed_10((bool)1);
		// for (var i = DebugListeners.Count - 1; i >= 0; i--) {
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_28 = __this->get_DebugListeners_11();
		int32_t L_29;
		L_29 = List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline(L_28, /*hidden argument*/List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_29, (int32_t)1));
		goto IL_0104;
	}

IL_00e8:
	{
		// DebugListeners[i].OnWorldDestroyed (this);
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_30 = __this->get_DebugListeners_11();
		int32_t L_31 = V_9;
		RuntimeObject* L_32;
		L_32 = List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline(L_30, L_31, /*hidden argument*/List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		InterfaceActionInvoker1< EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * >::Invoke(4 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnWorldDestroyed(Leopotam.Ecs.EcsWorld) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_32, __this);
		// for (var i = DebugListeners.Count - 1; i >= 0; i--) {
		int32_t L_33 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1));
	}

IL_0104:
	{
		// for (var i = DebugListeners.Count - 1; i >= 0; i--) {
		int32_t L_34 = V_9;
		V_10 = (bool)((((int32_t)((((int32_t)L_34) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_10;
		if (L_35)
		{
			goto IL_00e8;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsWorld::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return !IsDestroyed;
		bool L_0 = __this->get_IsDestroyed_10();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::NewEntity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	int32_t V_4 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_5 = NULL;
	bool V_6 = false;
	Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->get_IsDestroyed_10();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_RuntimeMethod_var)));
	}

IL_0017:
	{
		// entity.Owner = this;
		(&V_0)->set_Owner_2(__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_3 = __this->get_FreeEntities_2();
		int32_t L_4 = L_3->get_Count_1();
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_6 = __this->get_FreeEntities_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6->get_Items_0();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_8 = __this->get_FreeEntities_2();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_9 = L_8;
		int32_t L_10 = L_9->get_Count_1();
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		L_9->set_Count_1(L_11);
		int32_t L_12 = V_4;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->set_Id_0(L_14);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_15 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_16 = V_0;
		int32_t L_17 = L_16.get_Id_0();
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_18 = V_3;
		uint16_t L_19 = L_18->get_Gen_0();
		(&V_0)->set_Gen_1(L_19);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_20 = V_3;
		L_20->set_ComponentsCountX2_1((int16_t)0);
		goto IL_011d;
	}

IL_008a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_21 = __this->get_EntitiesCount_1();
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_22 = __this->get_Entities_0();
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** L_24 = __this->get_address_of_Entities_0();
		int32_t L_25 = __this->get_EntitiesCount_1();
		Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14((EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8**)L_24, ((int32_t)((int32_t)L_25<<(int32_t)1)), /*hidden argument*/Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
	}

IL_00b7:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_26 = __this->get_EntitiesCount_1();
		V_4 = L_26;
		int32_t L_27 = V_4;
		__this->set_EntitiesCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = V_4;
		(&V_0)->set_Id_0(L_28);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_29 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_30 = V_0;
		int32_t L_31 = L_30.get_Id_0();
		V_5 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = V_5;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_33 = __this->get_address_of_Config_7();
		int32_t L_34 = L_33->get_EntityComponentsCacheSize_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)2)));
		L_32->set_Components_2(L_35);
		// entityData.Gen = 1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_5;
		L_36->set_Gen_0((uint16_t)1);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_37 = V_5;
		uint16_t L_38 = L_37->get_Gen_0();
		(&V_0)->set_Gen_1(L_38);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_39 = V_5;
		L_39->set_ComponentsCountX2_1((int16_t)0);
	}

IL_011d:
	{
		// _leakedEntities.Add (entity);
		EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * L_40 = __this->get__leakedEntities_12();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_41 = V_0;
		EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_inline(L_40, L_41, /*hidden argument*/EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_RuntimeMethod_var);
		// foreach (var debugListener in DebugListeners) {
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_42 = __this->get_DebugListeners_11();
		Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  L_43;
		L_43 = List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33(L_42, /*hidden argument*/List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33_RuntimeMethod_var);
		V_7 = L_43;
	}

IL_0138:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014e;
		}

IL_013a:
		{
			// foreach (var debugListener in DebugListeners) {
			RuntimeObject* L_44;
			L_44 = Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_inline((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_RuntimeMethod_var);
			V_8 = L_44;
			// debugListener.OnEntityCreated (entity);
			RuntimeObject* L_45 = V_8;
			EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_46 = V_0;
			InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityCreated(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_45, L_46);
		}

IL_014e:
		{
			// foreach (var debugListener in DebugListeners) {
			bool L_47;
			L_47 = Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_013a;
			}
		}

IL_0157:
		{
			IL2CPP_LEAVE(0x168, FINALLY_0159);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0159;
	}

FINALLY_0159:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(345)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(345)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x168, IL_0168)
	}

IL_0168:
	{
		// return entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_48 = V_0;
		V_9 = L_48;
		goto IL_016d;
	}

IL_016d:
	{
		// }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_49 = V_9;
		return L_49;
	}
}
// Leopotam.Ecs.EcsEntity Leopotam.Ecs.EcsWorld::RestoreEntityFromInternalId(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsWorld_RestoreEntityFromInternalId_mB156B7CAC2FDEABFCC790E3A389FE0E73063C410 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___id0, int32_t ___gen1, const RuntimeMethod* method)
{
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_2 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// entity.Owner = this;
		(&V_0)->set_Owner_2(__this);
		// entity.Id = id;
		int32_t L_0 = ___id0;
		(&V_0)->set_Id_0(L_0);
		// if (gen < 0) {
		int32_t L_1 = ___gen1;
		V_1 = (bool)((((int32_t)L_1) < ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		// entity.Gen = 0;
		(&V_0)->set_Gen_1((uint16_t)0);
		// ref var entityData = ref GetEntityData (entity);
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(__this, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_0), /*hidden argument*/NULL);
		V_2 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_4 = V_2;
		uint16_t L_5 = L_4->get_Gen_0();
		(&V_0)->set_Gen_1(L_5);
		goto IL_0046;
	}

IL_003b:
	{
		// entity.Gen = (ushort) gen;
		int32_t L_6 = ___gen1;
		(&V_0)->set_Gen_1((uint16_t)((int32_t)((uint16_t)L_6)));
	}

IL_0046:
	{
		// return entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_7 = V_0;
		V_3 = L_7;
		goto IL_004a;
	}

IL_004a:
	{
		// }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_8 = V_3;
		return L_8;
	}
}
// Leopotam.Ecs.EcsFilter Leopotam.Ecs.EcsWorld::GetFilter(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, Type_t * ___filterType0, bool ___createIfNotExists1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * V_0 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_22 = NULL;
	bool V_23 = false;
	bool V_24 = false;
	Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  V_25;
	memset((&V_25), 0, sizeof(V_25));
	RuntimeObject* V_26 = NULL;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_29 = NULL;
	bool V_30 = false;
	bool V_31 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B40_0 = 0;
	{
		// if (filterType == null) { throw new Exception ("FilterType is null."); }
		Type_t * L_0 = ___filterType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		V_2 = L_1;
		bool L_2 = V_2;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// if (filterType == null) { throw new Exception ("FilterType is null."); }
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9E971242C1AFFA651AB3B5655687128872AFBAF8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3_RuntimeMethod_var)));
	}

IL_0018:
	{
		// if (!filterType.IsSubclassOf (typeof (EcsFilter))) { throw new Exception ($"Invalid filter type: {filterType}."); }
		Type_t * L_4 = ___filterType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, Type_t * >::Invoke(103 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, L_4, L_6);
		V_3 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0041;
		}
	}
	{
		// if (!filterType.IsSubclassOf (typeof (EcsFilter))) { throw new Exception ($"Invalid filter type: {filterType}."); }
		Type_t * L_9 = ___filterType0;
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9A0E9ABEC1A97A416116255237E07FACD27092A2)), L_9, /*hidden argument*/NULL);
		Exception_t * L_11 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3_RuntimeMethod_var)));
	}

IL_0041:
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_12 = __this->get_IsDestroyed_10();
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0059;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3_RuntimeMethod_var)));
	}

IL_0059:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		V_5 = 0;
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_15 = __this->get_Filters_3();
		int32_t L_16 = L_15->get_Count_1();
		V_6 = L_16;
		goto IL_00a8;
	}

IL_006b:
	{
		// if (Filters.Items[i].GetType () == filterType) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_17 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_18 = L_17->get_Items_0();
		int32_t L_19 = V_5;
		int32_t L_20 = L_19;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Type_t * L_22;
		L_22 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_21, /*hidden argument*/NULL);
		Type_t * L_23 = ___filterType0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_22, L_23, /*hidden argument*/NULL);
		V_7 = L_24;
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00a1;
		}
	}
	{
		// return Filters.Items[i];
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_26 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_27 = L_26->get_Items_0();
		int32_t L_28 = V_5;
		int32_t L_29 = L_28;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		V_8 = L_30;
		goto IL_02f6;
	}

IL_00a1:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00a8:
	{
		// for (int i = 0, iMax = Filters.Count; i < iMax; i++) {
		int32_t L_32 = V_5;
		int32_t L_33 = V_6;
		V_9 = (bool)((((int32_t)L_32) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_9;
		if (L_34)
		{
			goto IL_006b;
		}
	}
	{
		// if (!createIfNotExists) {
		bool L_35 = ___createIfNotExists1;
		V_10 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_00c7;
		}
	}
	{
		// return null;
		V_8 = (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 *)NULL;
		goto IL_02f6;
	}

IL_00c7:
	{
		// var filter = (EcsFilter) Activator.CreateInstance (filterType, BindingFlags.NonPublic | BindingFlags.Instance, null, _filterCtor, CultureInfo.InvariantCulture);
		Type_t * L_37 = ___filterType0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_38 = __this->get__filterCtor_8();
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_39;
		L_39 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		RuntimeObject * L_40;
		L_40 = Activator_CreateInstance_mBA776E4823B408DC61E91344D8CF20861F03B8A6(L_37, ((int32_t)36), (Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 *)NULL, L_38, L_39, /*hidden argument*/NULL);
		V_0 = ((EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 *)CastclassClass((RuntimeObject*)L_40, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55_il2cpp_TypeInfo_var));
		// for (var filterIdx = 0; filterIdx < Filters.Count; filterIdx++) {
		V_11 = 0;
		goto IL_0132;
	}

IL_00e6:
	{
		// if (filter.AreComponentsSame (Filters.Items[filterIdx])) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_41 = V_0;
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_42 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_43 = L_42->get_Items_0();
		int32_t L_44 = V_11;
		int32_t L_45 = L_44;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_46 = (L_43)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_45));
		bool L_47;
		L_47 = EcsFilter_AreComponentsSame_m104DC79D548547DCA83C47DB4A1C0A13CA06E444(L_41, L_46, /*hidden argument*/NULL);
		V_12 = L_47;
		bool L_48 = V_12;
		if (!L_48)
		{
			goto IL_012b;
		}
	}
	{
		// throw new Exception (
		//     $"Invalid filter \"{filter.GetType ()}\": Another filter \"{Filters.Items[filterIdx].GetType ()}\" already has same components, but in different order.");
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_49 = V_0;
		Type_t * L_50;
		L_50 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_49, /*hidden argument*/NULL);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_51 = __this->get_Filters_3();
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_52 = L_51->get_Items_0();
		int32_t L_53 = V_11;
		int32_t L_54 = L_53;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_55 = (L_52)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_54));
		Type_t * L_56;
		L_56 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_55, /*hidden argument*/NULL);
		String_t* L_57;
		L_57 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF4CE6C363FEC68EE5E06DCCDE841F049522A07A2)), L_50, L_56, /*hidden argument*/NULL);
		Exception_t * L_58 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_58, L_57, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_58, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetFilter_mEF71896EFA460F0F991728F27D3A0CC49EB3C4C3_RuntimeMethod_var)));
	}

IL_012b:
	{
		// for (var filterIdx = 0; filterIdx < Filters.Count; filterIdx++) {
		int32_t L_59 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_0132:
	{
		// for (var filterIdx = 0; filterIdx < Filters.Count; filterIdx++) {
		int32_t L_60 = V_11;
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_61 = __this->get_Filters_3();
		int32_t L_62 = L_61->get_Count_1();
		V_13 = (bool)((((int32_t)L_60) < ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_13;
		if (L_63)
		{
			goto IL_00e6;
		}
	}
	{
		// Filters.Add (filter);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_64 = __this->get_Filters_3();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_65 = V_0;
		EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline(L_64, L_65, /*hidden argument*/EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		V_14 = 0;
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_66 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = L_66->get_IncludedTypeIndices_7();
		V_15 = ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)));
		goto IL_01b4;
	}

IL_0163:
	{
		// if (!FilterByIncludedComponents.TryGetValue (filter.IncludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_68 = __this->get_FilterByIncludedComponents_4();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_69 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = L_69->get_IncludedTypeIndices_7();
		int32_t L_71 = V_14;
		int32_t L_72 = L_71;
		int32_t L_73 = (L_70)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_72));
		bool L_74;
		L_74 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_68, L_73, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_16), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_17 = (bool)((((int32_t)L_74) == ((int32_t)0))? 1 : 0);
		bool L_75 = V_17;
		if (!L_75)
		{
			goto IL_01a4;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_76 = (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *)il2cpp_codegen_object_new(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline(L_76, 8, /*hidden argument*/EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		V_16 = L_76;
		// FilterByIncludedComponents[filter.IncludedTypeIndices[i]] = filtersList;
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_77 = __this->get_FilterByIncludedComponents_4();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_78 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = L_78->get_IncludedTypeIndices_7();
		int32_t L_80 = V_14;
		int32_t L_81 = L_80;
		int32_t L_82 = (L_79)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_81));
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_83 = V_16;
		Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95(L_77, L_82, L_83, /*hidden argument*/Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var);
	}

IL_01a4:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_84 = V_16;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_85 = V_0;
		EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline(L_84, L_85, /*hidden argument*/EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_86 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_01b4:
	{
		// for (int i = 0, iMax = filter.IncludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_87 = V_14;
		int32_t L_88 = V_15;
		V_18 = (bool)((((int32_t)L_87) < ((int32_t)L_88))? 1 : 0);
		bool L_89 = V_18;
		if (L_89)
		{
			goto IL_0163;
		}
	}
	{
		// if (filter.ExcludedTypeIndices != null) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_90 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = L_90->get_ExcludedTypeIndices_8();
		V_19 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_91) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_92 = V_19;
		if (!L_92)
		{
			goto IL_023d;
		}
	}
	{
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		V_20 = 0;
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_93 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_94 = L_93->get_ExcludedTypeIndices_8();
		V_21 = ((int32_t)((int32_t)(((RuntimeArray*)L_94)->max_length)));
		goto IL_0230;
	}

IL_01df:
	{
		// if (!FilterByExcludedComponents.TryGetValue (filter.ExcludedTypeIndices[i], out var filtersList)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_95 = __this->get_FilterByExcludedComponents_5();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_96 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_97 = L_96->get_ExcludedTypeIndices_8();
		int32_t L_98 = V_20;
		int32_t L_99 = L_98;
		int32_t L_100 = (L_97)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_99));
		bool L_101;
		L_101 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_95, L_100, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_22), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_23 = (bool)((((int32_t)L_101) == ((int32_t)0))? 1 : 0);
		bool L_102 = V_23;
		if (!L_102)
		{
			goto IL_0220;
		}
	}
	{
		// filtersList = new EcsGrowList<EcsFilter> (8);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_103 = (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 *)il2cpp_codegen_object_new(EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727_il2cpp_TypeInfo_var);
		EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_inline(L_103, 8, /*hidden argument*/EcsGrowList_1__ctor_mA40D8A5169F0DF48BA8A83D06E36BC27D85367FB_RuntimeMethod_var);
		V_22 = L_103;
		// FilterByExcludedComponents[filter.ExcludedTypeIndices[i]] = filtersList;
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_104 = __this->get_FilterByExcludedComponents_5();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_105 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_106 = L_105->get_ExcludedTypeIndices_8();
		int32_t L_107 = V_20;
		int32_t L_108 = L_107;
		int32_t L_109 = (L_106)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_108));
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_110 = V_22;
		Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95(L_104, L_109, L_110, /*hidden argument*/Dictionary_2_set_Item_m43BF5A54CAFA2C2C1497FD1386D09B63EFDA7D95_RuntimeMethod_var);
	}

IL_0220:
	{
		// filtersList.Add (filter);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_111 = V_22;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_112 = V_0;
		EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_inline(L_111, L_112, /*hidden argument*/EcsGrowList_1_Add_m077AF665DD5805866D02588651D859D62FA8E42A_RuntimeMethod_var);
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_113 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
	}

IL_0230:
	{
		// for (int i = 0, iMax = filter.ExcludedTypeIndices.Length; i < iMax; i++) {
		int32_t L_114 = V_20;
		int32_t L_115 = V_21;
		V_24 = (bool)((((int32_t)L_114) < ((int32_t)L_115))? 1 : 0);
		bool L_116 = V_24;
		if (L_116)
		{
			goto IL_01df;
		}
	}
	{
	}

IL_023d:
	{
		// foreach (var debugListener in DebugListeners) {
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_117 = __this->get_DebugListeners_11();
		Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  L_118;
		L_118 = List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33(L_117, /*hidden argument*/List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33_RuntimeMethod_var);
		V_25 = L_118;
	}

IL_024b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0261;
		}

IL_024d:
		{
			// foreach (var debugListener in DebugListeners) {
			RuntimeObject* L_119;
			L_119 = Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_inline((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_25), /*hidden argument*/Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_RuntimeMethod_var);
			V_26 = L_119;
			// debugListener.OnFilterCreated (filter);
			RuntimeObject* L_120 = V_26;
			EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_121 = V_0;
			InterfaceActionInvoker1< EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnFilterCreated(Leopotam.Ecs.EcsFilter) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_120, L_121);
		}

IL_0261:
		{
			// foreach (var debugListener in DebugListeners) {
			bool L_122;
			L_122 = Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_25), /*hidden argument*/Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34_RuntimeMethod_var);
			if (L_122)
			{
				goto IL_024d;
			}
		}

IL_026a:
		{
			IL2CPP_LEAVE(0x27B, FINALLY_026c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_026c;
	}

FINALLY_026c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_25), /*hidden argument*/Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(620)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(620)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x27B, IL_027b)
	}

IL_027b:
	{
		// entity.Owner = this;
		(&V_1)->set_Owner_2(__this);
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		V_27 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_123 = __this->get_EntitiesCount_1();
		V_28 = L_123;
		goto IL_02e5;
	}

IL_0290:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_124 = __this->get_Entities_0();
		int32_t L_125 = V_27;
		V_29 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_124)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_125)));
		// if (entityData.ComponentsCountX2 > 0 && filter.IsCompatible (entityData, 0)) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_126 = V_29;
		int16_t L_127 = L_126->get_ComponentsCountX2_1();
		if ((((int32_t)L_127) <= ((int32_t)0)))
		{
			goto IL_02b5;
		}
	}
	{
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_128 = V_0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_129 = V_29;
		bool L_130;
		L_130 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_128, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_129, 0, /*hidden argument*/NULL);
		G_B40_0 = ((int32_t)(L_130));
		goto IL_02b6;
	}

IL_02b5:
	{
		G_B40_0 = 0;
	}

IL_02b6:
	{
		V_30 = (bool)G_B40_0;
		bool L_131 = V_30;
		if (!L_131)
		{
			goto IL_02de;
		}
	}
	{
		// entity.Id = i;
		int32_t L_132 = V_27;
		(&V_1)->set_Id_0(L_132);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_133 = V_29;
		uint16_t L_134 = L_133->get_Gen_0();
		(&V_1)->set_Gen_1(L_134);
		// filter.OnAddEntity (entity);
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_135 = V_0;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_135, (&V_1));
	}

IL_02de:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_136 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1));
	}

IL_02e5:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_137 = V_27;
		int32_t L_138 = V_28;
		V_31 = (bool)((((int32_t)L_137) < ((int32_t)L_138))? 1 : 0);
		bool L_139 = V_31;
		if (L_139)
		{
			goto IL_0290;
		}
	}
	{
		// return filter;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_140 = V_0;
		V_8 = L_140;
		goto IL_02f6;
	}

IL_02f6:
	{
		// }
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_141 = V_8;
		return L_141;
	}
}
// Leopotam.Ecs.EcsWorldStats Leopotam.Ecs.EcsWorld::GetStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC  EcsWorld_GetStats_m247BA19DBEEF0028429586BC63FCC43DD08C21CF (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC  V_0;
	memset((&V_0), 0, sizeof(V_0));
	EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC  V_1;
	memset((&V_1), 0, sizeof(V_1));
	EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// var stats = new EcsWorldStats () {
		//     ActiveEntities = EntitiesCount - FreeEntities.Count,
		//     ReservedEntities = FreeEntities.Count,
		//     Filters = Filters.Count,
		//     Components = _usedComponentsCount
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC ));
		int32_t L_0 = __this->get_EntitiesCount_1();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_1 = __this->get_FreeEntities_2();
		int32_t L_2 = L_1->get_Count_1();
		(&V_1)->set_ActiveEntities_0(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2)));
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_3 = __this->get_FreeEntities_2();
		int32_t L_4 = L_3->get_Count_1();
		(&V_1)->set_ReservedEntities_1(L_4);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_5 = __this->get_Filters_3();
		int32_t L_6 = L_5->get_Count_1();
		(&V_1)->set_Filters_2(L_6);
		int32_t L_7 = __this->get__usedComponentsCount_6();
		(&V_1)->set_Components_3(L_7);
		EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC  L_8 = V_1;
		V_0 = L_8;
		// return stats;
		EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC  L_9 = V_0;
		V_2 = L_9;
		goto IL_0059;
	}

IL_0059:
	{
		// }
		EcsWorldStats_tB463449176612D9791B9A775844ACAE229E157CC  L_10 = V_2;
		return L_10;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::RecycleEntityData(System.Int32,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___id0, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (entityData.ComponentsCountX2 != 0) { throw new Exception ("Cant recycle invalid entity."); }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_0 = ___entityData1;
		int16_t L_1 = L_0->get_ComponentsCountX2_1();
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (entityData.ComponentsCountX2 != 0) { throw new Exception ("Cant recycle invalid entity."); }
		Exception_t * L_3 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB9E2385A9B81E000D6B67C908B888F657688F53)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43_RuntimeMethod_var)));
	}

IL_001a:
	{
		// entityData.ComponentsCountX2 = -2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_4 = ___entityData1;
		L_4->set_ComponentsCountX2_1((int16_t)((int32_t)-2));
		// entityData.Gen++;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5 = ___entityData1;
		uint16_t* L_6 = L_5->get_address_of_Gen_0();
		uint16_t* L_7 = L_6;
		int32_t L_8 = *((uint16_t*)L_7);
		*((int16_t*)L_7) = (int16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1))));
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_9 = ___entityData1;
		uint16_t L_10 = L_9->get_Gen_0();
		V_1 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// if (entityData.Gen == 0) { entityData.Gen = 1; }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_12 = ___entityData1;
		L_12->set_Gen_0((uint16_t)1);
	}

IL_0044:
	{
		// FreeEntities.Add (id);
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_13 = __this->get_FreeEntities_2();
		int32_t L_14 = ___id0;
		EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_inline(L_13, L_14, /*hidden argument*/EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean Leopotam.Ecs.EcsWorld::CheckForLeakedEntities(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, String_t* ___errorMsg0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (_leakedEntities.Count > 0) {
		EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * L_0 = __this->get__leakedEntities_12();
		int32_t L_1 = L_0->get_Count_1();
		V_0 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0086;
		}
	}
	{
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		V_1 = 0;
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * L_3 = __this->get__leakedEntities_12();
		int32_t L_4 = L_3->get_Count_1();
		V_2 = L_4;
		goto IL_006f;
	}

IL_0024:
	{
		// if (GetEntityData (_leakedEntities.Items[i]).ComponentsCountX2 == 0) {
		EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * L_5 = __this->get__leakedEntities_12();
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_6 = L_5->get_Items_0();
		int32_t L_7 = V_1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_8;
		L_8 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(__this, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)((L_6)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_7))), /*hidden argument*/NULL);
		int16_t L_9 = L_8->get_ComponentsCountX2_1();
		V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_006a;
		}
	}
	{
		// if (errorMsg != null) {
		String_t* L_11 = ___errorMsg0;
		V_4 = (bool)((!(((RuntimeObject*)(String_t*)L_11) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		// throw new Exception ($"{errorMsg}: Empty entity detected, possible memory leak.");
		String_t* L_13 = ___errorMsg0;
		String_t* L_14;
		L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7740996BF0E7FB3BDF5EE9BACDA3879D19B6044)), /*hidden argument*/NULL);
		Exception_t * L_15 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_CheckForLeakedEntities_mD1A02ACCE99BEFB933B9EE17BB8EB473B73FCE78_RuntimeMethod_var)));
	}

IL_0065:
	{
		// return true;
		V_5 = (bool)1;
		goto IL_008b;
	}

IL_006a:
	{
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_006f:
	{
		// for (int i = 0, iMax = _leakedEntities.Count; i < iMax; i++) {
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		V_6 = (bool)((((int32_t)L_17) < ((int32_t)L_18))? 1 : 0);
		bool L_19 = V_6;
		if (L_19)
		{
			goto IL_0024;
		}
	}
	{
		// _leakedEntities.Count = 0;
		EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * L_20 = __this->get__leakedEntities_12();
		L_20->set_Count_1(0);
	}

IL_0086:
	{
		// return false;
		V_5 = (bool)0;
		goto IL_008b;
	}

IL_008b:
	{
		// }
		bool L_21 = V_5;
		return L_21;
	}
}
// System.Void Leopotam.Ecs.EcsWorld::UpdateFilters(System.Int32,Leopotam.Ecs.EcsEntity&,Leopotam.Ecs.EcsWorld/EcsEntityData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___typeIdx0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	bool V_30 = false;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->get_IsDestroyed_10();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (typeIdx < 0) {
		int32_t L_3 = ___typeIdx0;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		// if (FilterByIncludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_5 = __this->get_FilterByIncludedComponents_4();
		int32_t L_6 = ___typeIdx0;
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_5, ((-L_6)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00c4;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_9 = V_0;
		int32_t L_10 = L_9->get_Count_1();
		V_5 = L_10;
		goto IL_00b7;
	}

IL_0047:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_11 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_12 = L_11->get_Items_0();
		int32_t L_13 = V_4;
		int32_t L_14 = L_13;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_16 = ___entityData2;
		bool L_17;
		L_17 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_15, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_16, 0, /*hidden argument*/NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_19 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_20 = L_19->get_Items_0();
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_24;
		L_24 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_23, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_25 = ___entity1;
		int32_t L_26;
		L_26 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_24, L_26, (int32_t*)(&V_7), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_0088;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_7 = (-1);
	}

IL_0088:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_29 = V_7;
		V_9 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_009f;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t * L_31 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_009f:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_32 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_33 = L_32->get_Items_0();
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_37 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_36, L_37);
	}

IL_00b0:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00b7:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_39 = V_4;
		int32_t L_40 = V_5;
		V_10 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_0047;
		}
	}
	{
	}

IL_00c4:
	{
		// if (FilterByExcludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_42 = __this->get_FilterByExcludedComponents_5();
		int32_t L_43 = ___typeIdx0;
		bool L_44;
		L_44 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_42, ((-L_43)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_11 = L_44;
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_016a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_12 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_46 = V_0;
		int32_t L_47 = L_46->get_Count_1();
		V_13 = L_47;
		goto IL_015d;
	}

IL_00ea:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_48 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_49 = L_48->get_Items_0();
		int32_t L_50 = V_12;
		int32_t L_51 = L_50;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_53 = ___entityData2;
		int32_t L_54 = ___typeIdx0;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_52, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_53, L_54, /*hidden argument*/NULL);
		V_14 = L_55;
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0156;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_57 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_58 = L_57->get_Items_0();
		int32_t L_59 = V_12;
		int32_t L_60 = L_59;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_62;
		L_62 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_61, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_63 = ___entity1;
		int32_t L_64;
		L_64 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_63, /*hidden argument*/NULL);
		bool L_65;
		L_65 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_62, L_64, (int32_t*)(&V_15), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_16;
		if (!L_66)
		{
			goto IL_012b;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_15 = (-1);
	}

IL_012b:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_67 = V_15;
		V_17 = (bool)((((int32_t)((((int32_t)L_67) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0145;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t * L_69 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_0145:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_70 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_71 = L_70->get_Items_0();
		int32_t L_72 = V_12;
		int32_t L_73 = L_72;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_75 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_74, L_75);
	}

IL_0156:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_015d:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_77 = V_12;
		int32_t L_78 = V_13;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_18;
		if (L_79)
		{
			goto IL_00ea;
		}
	}
	{
	}

IL_016a:
	{
		goto IL_02ba;
	}

IL_0170:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_80 = __this->get_FilterByIncludedComponents_4();
		int32_t L_81 = ___typeIdx0;
		bool L_82;
		L_82 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_80, L_81, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_19 = L_82;
		bool L_83 = V_19;
		if (!L_83)
		{
			goto IL_0216;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_20 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_84 = V_0;
		int32_t L_85 = L_84->get_Count_1();
		V_21 = L_85;
		goto IL_0209;
	}

IL_0196:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_86 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_87 = L_86->get_Items_0();
		int32_t L_88 = V_20;
		int32_t L_89 = L_88;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_91 = ___entityData2;
		bool L_92;
		L_92 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_90, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_91, 0, /*hidden argument*/NULL);
		V_22 = L_92;
		bool L_93 = V_22;
		if (!L_93)
		{
			goto IL_0202;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_94 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_95 = L_94->get_Items_0();
		int32_t L_96 = V_20;
		int32_t L_97 = L_96;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_98 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_99;
		L_99 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_98, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_100 = ___entity1;
		int32_t L_101;
		L_101 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_100, /*hidden argument*/NULL);
		bool L_102;
		L_102 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_99, L_101, (int32_t*)(&V_23), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_102) == ((int32_t)0))? 1 : 0);
		bool L_103 = V_24;
		if (!L_103)
		{
			goto IL_01d7;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_23 = (-1);
	}

IL_01d7:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_104 = V_23;
		V_25 = (bool)((((int32_t)((((int32_t)L_104) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_105 = V_25;
		if (!L_105)
		{
			goto IL_01f1;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_01f1:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_107 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_108 = L_107->get_Items_0();
		int32_t L_109 = V_20;
		int32_t L_110 = L_109;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_112 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_111, L_112);
	}

IL_0202:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_113 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
	}

IL_0209:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_114 = V_20;
		int32_t L_115 = V_21;
		V_26 = (bool)((((int32_t)L_114) < ((int32_t)L_115))? 1 : 0);
		bool L_116 = V_26;
		if (L_116)
		{
			goto IL_0196;
		}
	}
	{
	}

IL_0216:
	{
		// if (FilterByExcludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_117 = __this->get_FilterByExcludedComponents_5();
		int32_t L_118 = ___typeIdx0;
		bool L_119;
		L_119 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_117, L_118, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_27 = L_119;
		bool L_120 = V_27;
		if (!L_120)
		{
			goto IL_02b9;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_28 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_121 = V_0;
		int32_t L_122 = L_121->get_Count_1();
		V_29 = L_122;
		goto IL_02ac;
	}

IL_023b:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_123 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_124 = L_123->get_Items_0();
		int32_t L_125 = V_28;
		int32_t L_126 = L_125;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_127 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_126));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_128 = ___entityData2;
		int32_t L_129 = ___typeIdx0;
		bool L_130;
		L_130 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_127, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_128, ((-L_129)), /*hidden argument*/NULL);
		V_30 = L_130;
		bool L_131 = V_30;
		if (!L_131)
		{
			goto IL_02a5;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_132 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_133 = L_132->get_Items_0();
		int32_t L_134 = V_28;
		int32_t L_135 = L_134;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_136 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_135));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_137;
		L_137 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_136, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_138 = ___entity1;
		int32_t L_139;
		L_139 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_138, /*hidden argument*/NULL);
		bool L_140;
		L_140 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_137, L_139, (int32_t*)(&V_31), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_32 = (bool)((((int32_t)L_140) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_32;
		if (!L_141)
		{
			goto IL_027d;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_31 = (-1);
	}

IL_027d:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_142 = V_31;
		V_33 = (bool)((((int32_t)L_142) < ((int32_t)0))? 1 : 0);
		bool L_143 = V_33;
		if (!L_143)
		{
			goto IL_0294;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t * L_144 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_144, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_0294:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_145 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_146 = L_145->get_Items_0();
		int32_t L_147 = V_28;
		int32_t L_148 = L_147;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_149 = (L_146)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_148));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_150 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_149, L_150);
	}

IL_02a5:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_151 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
	}

IL_02ac:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_152 = V_28;
		int32_t L_153 = V_29;
		V_34 = (bool)((((int32_t)L_152) < ((int32_t)L_153))? 1 : 0);
		bool L_154 = V_34;
		if (L_154)
		{
			goto IL_023b;
		}
	}
	{
	}

IL_02b9:
	{
	}

IL_02ba:
	{
		// }
		return;
	}
}
// Leopotam.Ecs.EcsWorld/EcsEntityData& Leopotam.Ecs.EcsWorld::GetEntityData(Leopotam.Ecs.EcsEntity&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_2 = NULL;
	int32_t G_B5_0 = 0;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->get_IsDestroyed_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_3 = ___entity0;
		int32_t L_4 = L_3->get_Id_0();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_5 = ___entity0;
		int32_t L_6 = L_5->get_Id_0();
		int32_t L_7 = __this->get_EntitiesCount_1();
		G_B5_0 = ((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_9 = ___entity0;
		int32_t L_10 = L_9->get_Id_0();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6C6C179BF2FFCA1A20E3ECDBE723A7176ED7715)), L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_RuntimeMethod_var)));
	}

IL_0051:
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_15 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_16 = ___entity0;
		int32_t L_17 = L_16->get_Id_0();
		V_2 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		goto IL_0065;
	}

IL_0065:
	{
		// }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_18 = V_2;
		return (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)(L_18);
	}
}
// System.Int32 Leopotam.Ecs.EcsWorld::GetAllEntities(Leopotam.Ecs.EcsEntity[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t EcsWorld_GetAllEntities_m3C3BC7091EF167588B55C37903B625B50B567406 (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** ___entities0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t G_B3_0 = 0;
	{
		// var count = EntitiesCount - FreeEntities.Count;
		int32_t L_0 = __this->get_EntitiesCount_1();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_1 = __this->get_FreeEntities_2();
		int32_t L_2 = L_1->get_Count_1();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2));
		// if (entities == null || entities.Length < count) {
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** L_3 = ___entities0;
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_4 = *((EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7**)L_3);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** L_5 = ___entities0;
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_6 = *((EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7**)L_5);
		int32_t L_7 = V_0;
		G_B3_0 = ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))) < ((int32_t)L_7))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
	}

IL_0022:
	{
		V_3 = (bool)G_B3_0;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// entities = new EcsEntity[count];
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** L_9 = ___entities0;
		int32_t L_10 = V_0;
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_11 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)SZArrayNew(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7_il2cpp_TypeInfo_var, (uint32_t)L_10);
		*((RuntimeObject **)L_9) = (RuntimeObject *)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)(RuntimeObject *)L_11);
	}

IL_0030:
	{
		// e.Owner = this;
		(&V_1)->set_Owner_2(__this);
		// var id = 0;
		V_2 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_12 = __this->get_EntitiesCount_1();
		V_5 = L_12;
		goto IL_0097;
	}

IL_0047:
	{
		// ref var entityData = ref Entities[i];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_13 = __this->get_Entities_0();
		int32_t L_14 = V_4;
		V_6 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_13)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_14)));
		// if (entityData.ComponentsCountX2 >= 0) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_15 = V_6;
		int16_t L_16 = L_15->get_ComponentsCountX2_1();
		V_7 = (bool)((((int32_t)((((int32_t)L_16) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0090;
		}
	}
	{
		// e.Id = i;
		int32_t L_18 = V_4;
		(&V_1)->set_Id_0(L_18);
		// e.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_19 = V_6;
		uint16_t L_20 = L_19->get_Gen_0();
		(&V_1)->set_Gen_1(L_20);
		// entities[id++] = e;
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** L_21 = ___entities0;
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_22 = *((EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7**)L_21);
		int32_t L_23 = V_2;
		int32_t L_24 = L_23;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_25 = V_1;
		(L_22)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24), (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 )L_25);
	}

IL_0090:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_26 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0097:
	{
		// for (int i = 0, iMax = EntitiesCount; i < iMax; i++) {
		int32_t L_27 = V_4;
		int32_t L_28 = V_5;
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_8;
		if (L_29)
		{
			goto IL_0047;
		}
	}
	{
		// return count;
		int32_t L_30 = V_0;
		V_9 = L_30;
		goto IL_00a8;
	}

IL_00a8:
	{
		// }
		int32_t L_31 = V_9;
		return L_31;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m3ACA34058501343164110D0E44C61F10AFD60684 (EmbeddedAttribute_t7C31CBFB035DA412880D90BEFBFE980E92E7B12C * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.IL2CPP.CompilerServices.Option Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Option()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Il2CppSetOptionAttribute_get_Option_m54C0F6438260F919A8909C564161A2D4AF5FFE46 (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, const RuntimeMethod* method)
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = __this->get_U3COptionU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Option(Unity.IL2CPP.CompilerServices.Option)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5 (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COptionU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Object Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Il2CppSetOptionAttribute_get_Value_mA76AC9A605133AD92635512E04C4EBC68D62C2FE (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, const RuntimeMethod* method)
{
	{
		// public object Value { get; private set; }
		RuntimeObject * L_0 = __this->get_U3CValueU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824 (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Value { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.IL2CPP.CompilerServices.Il2CppSetOptionAttribute::.ctor(Unity.IL2CPP.CompilerServices.Option,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute__ctor_m0C07BFA9197DB4A0D12251E2A8D11039076BE8DD (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___option0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		int32_t L_0 = ___option0;
		Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5_inline(__this, L_0, /*hidden argument*/NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		RuntimeObject * L_1 = ___value1;
		Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824_inline(__this, L_1, /*hidden argument*/NULL);
		// public Il2CppSetOptionAttribute (Option option, object value) { Option = option; Value = value; }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m6DC4CD42BAC27F74B4C0237DFE134345762401D4 (IsReadOnlyAttribute_t3188C6BF743FDB986678BFFC5F540708B12FBFD2 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_pinvoke(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_pinvoke_back(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke& marshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_pinvoke_cleanup(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_com(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com& marshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_com_back(const DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com& marshaled, DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812& unmarshaled)
{
	Exception_t* ___Entity_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Entity' of type 'DelayedOp'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Entity_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/DelayedOp
IL2CPP_EXTERN_C void DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshal_com_cleanup(DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_pinvoke(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_pinvoke_back(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke& marshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_pinvoke_cleanup(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_com(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com& marshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_com_back(const Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com& marshaled, Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C& unmarshaled)
{
	Exception_t* ____filter_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_filter' of type 'Enumerator': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____filter_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsFilter/Enumerator
IL2CPP_EXTERN_C void Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshal_com_cleanup(Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C_marshaled_com& marshaled)
{
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::.ctor(Leopotam.Ecs.EcsFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method)
{
	{
		// _filter = filter;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = ___filter0;
		__this->set__filter_0(L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_1 = __this->get__filter_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline(L_1, /*hidden argument*/NULL);
		__this->set__count_1(L_2);
		// _idx = -1;
		__this->set__idx_2((-1));
		// _filter.Lock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_3 = __this->get__filter_0();
		NullCheck(L_3);
		EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_AdjustorThunk (RuntimeObject * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline(_thisAdjusted, ___filter0, method);
}
// System.Int32 Leopotam.Ecs.EcsFilter/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323 (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// get => _idx;
		int32_t L_0 = __this->get__idx_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Leopotam.Ecs.EcsFilter/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7 (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// _filter.Unlock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = __this->get__filter_0();
		EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_inline(_thisAdjusted, method);
}
// System.Boolean Leopotam.Ecs.EcsFilter/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->get__idx_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set__idx_2(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get__count_1();
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * _thisAdjusted = reinterpret_cast<Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C *>(__this + _offset);
	bool _returnValue;
	_returnValue = Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_pinvoke(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.get_Gen_0();
	marshaled.___ComponentsCountX2_1 = unmarshaled.get_ComponentsCountX2_1();
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_Components_2());
}
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_pinvoke_back(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke& marshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_Gen_temp_0 = 0;
	unmarshaled_Gen_temp_0 = marshaled.___Gen_0;
	unmarshaled.set_Gen_0(unmarshaled_Gen_temp_0);
	int16_t unmarshaled_ComponentsCountX2_temp_1 = 0;
	unmarshaled_ComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.set_ComponentsCountX2_1(unmarshaled_ComponentsCountX2_temp_1);
	unmarshaled.set_Components_2((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_pinvoke_cleanup(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
}
// Conversion methods for marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_com(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com& marshaled)
{
	marshaled.___Gen_0 = unmarshaled.get_Gen_0();
	marshaled.___ComponentsCountX2_1 = unmarshaled.get_ComponentsCountX2_1();
	marshaled.___Components_2 = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I4, unmarshaled.get_Components_2());
}
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_com_back(const EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com& marshaled, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint16_t unmarshaled_Gen_temp_0 = 0;
	unmarshaled_Gen_temp_0 = marshaled.___Gen_0;
	unmarshaled.set_Gen_0(unmarshaled_Gen_temp_0);
	int16_t unmarshaled_ComponentsCountX2_temp_1 = 0;
	unmarshaled_ComponentsCountX2_temp_1 = marshaled.___ComponentsCountX2_1;
	unmarshaled.set_ComponentsCountX2_1(unmarshaled_ComponentsCountX2_temp_1);
	unmarshaled.set_Components_2((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, marshaled.___Components_2));
}
// Conversion method for clean up from marshalling of: Leopotam.Ecs.EcsWorld/EcsEntityData
IL2CPP_EXTERN_C void EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshal_com_cleanup(EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___Components_2);
	marshaled.___Components_2 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsAlive_mBCDE101FA542306B2186382BA92B818AF66CD785_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!IsWorldAlive (entity)) { return false; }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		bool L_1;
		L_1 = EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_0, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (!IsWorldAlive (entity)) { return false; }
		V_2 = (bool)0;
		goto IL_0040;
	}

IL_0013:
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_3 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_4 = L_3->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_5 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_6;
		L_6 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_4, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_5, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_6;
		// return entityData.Gen == entity.Gen && entityData.ComponentsCountX2 >= 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = V_0;
		uint16_t L_8 = L_7->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_9 = ___entity0;
		uint16_t L_10 = L_9->get_Gen_1();
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_11 = V_0;
		int16_t L_12 = L_11->get_ComponentsCountX2_1();
		G_B5_0 = ((((int32_t)((((int32_t)L_12) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = 0;
	}

IL_003d:
	{
		V_2 = (bool)G_B5_0;
		goto IL_0040;
	}

IL_0040:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntity_GetHashCode_mB847EED2B23DE1E722EEA210D852E1B8B01F6604_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		// var hashCode = (Id * 397) ^ Gen.GetHashCode ();
		int32_t L_0 = __this->get_Id_0();
		uint16_t* L_1 = __this->get_address_of_Gen_1();
		int32_t L_2;
		L_2 = UInt16_GetHashCode_mDA01CAA4AF8C22A63972F93F26AF7E888CEBD2AA((uint16_t*)L_1, /*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_0, (int32_t)((int32_t)397)))^(int32_t)L_2));
		// hashCode = (hashCode * 397) ^ (Owner != null ? Owner.GetHashCode () : 0);
		int32_t L_3 = V_0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_4 = __this->get_Owner_2();
		G_B1_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)397)));
		if (L_4)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)((int32_t)397)));
			goto IL_002d;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0038;
	}

IL_002d:
	{
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_5 = __this->get_Owner_2();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_5);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0038:
	{
		V_0 = ((int32_t)((int32_t)G_B3_1^(int32_t)G_B3_0));
		// return hashCode;
		int32_t L_7 = V_0;
		V_1 = L_7;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntity_Equals_mA31E5F554D4F150297F3953E6B754C19384D11B1_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return other is EcsEntity otherEntity && Equals (otherEntity);
		RuntimeObject * L_0 = ___other0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = ((*(EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)UnBox(L_1, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0_il2cpp_TypeInfo_var))));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_2 = V_0;
		bool L_3;
		L_3 = EcsEntity_Equals_m6C96F5128A123A5504E3C227C2E1E92D76AADACF((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)__this, L_2, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsNull_m030A5B4C42B6B884C8DC76841BF6751D8FB01A36_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Id == 0 && entity.Gen == 0;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		int32_t L_1 = L_0->get_Id_0();
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		uint16_t L_3 = L_2->get_Gen_1();
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_2 = NULL;
	int32_t G_B5_0 = 0;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->get_IsDestroyed_10();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_3 = ___entity0;
		int32_t L_4 = L_3->get_Id_0();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_5 = ___entity0;
		int32_t L_6 = L_5->get_Id_0();
		int32_t L_7 = __this->get_EntitiesCount_1();
		G_B5_0 = ((((int32_t)L_6) > ((int32_t)L_7))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 1;
	}

IL_0031:
	{
		V_1 = (bool)G_B5_0;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// if (entity.Id < 0 || entity.Id > EntitiesCount) { throw new Exception ($"Invalid entity {entity.Id}"); }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_9 = ___entity0;
		int32_t L_10 = L_9->get_Id_0();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_11);
		String_t* L_13;
		L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD6C6C179BF2FFCA1A20E3ECDBE723A7176ED7715)), L_12, /*hidden argument*/NULL);
		Exception_t * L_14 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_RuntimeMethod_var)));
	}

IL_0051:
	{
		// return ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_15 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_16 = ___entity0;
		int32_t L_17 = L_16->get_Id_0();
		V_2 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		goto IL_0065;
	}

IL_0065:
	{
		// }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_18 = V_2;
		return (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)(L_18);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_3 = NULL;
	int32_t V_4 = 0;
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_5 = NULL;
	bool V_6 = false;
	Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  V_7;
	memset((&V_7), 0, sizeof(V_7));
	RuntimeObject* V_8 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->get_IsDestroyed_10();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_NewEntity_m29529BC3FE9DB5E528E292C8307473751D1FE38D_RuntimeMethod_var)));
	}

IL_0017:
	{
		// entity.Owner = this;
		(&V_0)->set_Owner_2(__this);
		// if (FreeEntities.Count > 0) {
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_3 = __this->get_FreeEntities_2();
		int32_t L_4 = L_3->get_Count_1();
		V_2 = (bool)((((int32_t)L_4) > ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_008a;
		}
	}
	{
		// entity.Id = FreeEntities.Items[--FreeEntities.Count];
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_6 = __this->get_FreeEntities_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6->get_Items_0();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_8 = __this->get_FreeEntities_2();
		EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * L_9 = L_8;
		int32_t L_10 = L_9->get_Count_1();
		V_4 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1));
		int32_t L_11 = V_4;
		L_9->set_Count_1(L_11);
		int32_t L_12 = V_4;
		int32_t L_13 = L_12;
		int32_t L_14 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		(&V_0)->set_Id_0(L_14);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_15 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_16 = V_0;
		int32_t L_17 = L_16.get_Id_0();
		V_3 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_15)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_17)));
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_18 = V_3;
		uint16_t L_19 = L_18->get_Gen_0();
		(&V_0)->set_Gen_1(L_19);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_20 = V_3;
		L_20->set_ComponentsCountX2_1((int16_t)0);
		goto IL_011d;
	}

IL_008a:
	{
		// if (EntitiesCount == Entities.Length) {
		int32_t L_21 = __this->get_EntitiesCount_1();
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_22 = __this->get_Entities_0();
		V_6 = (bool)((((int32_t)L_21) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00b7;
		}
	}
	{
		// Array.Resize (ref Entities, EntitiesCount << 1);
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8** L_24 = __this->get_address_of_Entities_0();
		int32_t L_25 = __this->get_EntitiesCount_1();
		Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14((EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8**)L_24, ((int32_t)((int32_t)L_25<<(int32_t)1)), /*hidden argument*/Array_Resize_TisEcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3_m6D44D0BFE0C6CEEDA0FCAAE3C34707E30564AC14_RuntimeMethod_var);
	}

IL_00b7:
	{
		// entity.Id = EntitiesCount++;
		int32_t L_26 = __this->get_EntitiesCount_1();
		V_4 = L_26;
		int32_t L_27 = V_4;
		__this->set_EntitiesCount_1(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
		int32_t L_28 = V_4;
		(&V_0)->set_Id_0(L_28);
		// ref var entityData = ref Entities[entity.Id];
		EcsEntityDataU5BU5D_t9ADA0DB8384BA0278B49A90DDA28F85B03D436C8* L_29 = __this->get_Entities_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_30 = V_0;
		int32_t L_31 = L_30.get_Id_0();
		V_5 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)((L_29)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_31)));
		// entityData.Components = new int[Config.EntityComponentsCacheSize * 2];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_32 = V_5;
		EcsWorldConfig_t4358E5992974DCF87696EFBF9B12D04C9693268A * L_33 = __this->get_address_of_Config_7();
		int32_t L_34 = L_33->get_EntityComponentsCacheSize_3();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_34, (int32_t)2)));
		L_32->set_Components_2(L_35);
		// entityData.Gen = 1;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_5;
		L_36->set_Gen_0((uint16_t)1);
		// entity.Gen = entityData.Gen;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_37 = V_5;
		uint16_t L_38 = L_37->get_Gen_0();
		(&V_0)->set_Gen_1(L_38);
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_39 = V_5;
		L_39->set_ComponentsCountX2_1((int16_t)0);
	}

IL_011d:
	{
		// _leakedEntities.Add (entity);
		EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * L_40 = __this->get__leakedEntities_12();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_41 = V_0;
		EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_inline(L_40, L_41, /*hidden argument*/EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_RuntimeMethod_var);
		// foreach (var debugListener in DebugListeners) {
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_42 = __this->get_DebugListeners_11();
		Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463  L_43;
		L_43 = List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33(L_42, /*hidden argument*/List_1_GetEnumerator_m61FE9911FCB0CBC11D68DA11EE8879698609EE33_RuntimeMethod_var);
		V_7 = L_43;
	}

IL_0138:
	try
	{ // begin try (depth: 1)
		{
			goto IL_014e;
		}

IL_013a:
		{
			// foreach (var debugListener in DebugListeners) {
			RuntimeObject* L_44;
			L_44 = Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_inline((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_7), /*hidden argument*/Enumerator_get_Current_mBBDCE072C5E5813645131178DC9D54A9D524D5F6_RuntimeMethod_var);
			V_8 = L_44;
			// debugListener.OnEntityCreated (entity);
			RuntimeObject* L_45 = V_8;
			EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_46 = V_0;
			InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(0 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityCreated(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_45, L_46);
		}

IL_014e:
		{
			// foreach (var debugListener in DebugListeners) {
			bool L_47;
			L_47 = Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_7), /*hidden argument*/Enumerator_MoveNext_mAFD02FB2F017FAE1FF866CB5BAE8AF4D89DE4E34_RuntimeMethod_var);
			if (L_47)
			{
				goto IL_013a;
			}
		}

IL_0157:
		{
			IL2CPP_LEAVE(0x168, FINALLY_0159);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0159;
	}

FINALLY_0159:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5((Enumerator_t351CE137D4527F085A450911CD2E6F79EF38A463 *)(&V_7), /*hidden argument*/Enumerator_Dispose_m5C18DF4CC768007B266BAB0BC9373AF93CA52AB5_RuntimeMethod_var);
		IL2CPP_END_FINALLY(345)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(345)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x168, IL_0168)
	}

IL_0168:
	{
		// return entity;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_48 = V_0;
		V_9 = L_48;
		goto IL_016d;
	}

IL_016d:
	{
		// }
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_49 = V_9;
		return L_49;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, int32_t ___typeIdx0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity1, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	bool V_22 = false;
	int32_t V_23 = 0;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	bool V_30 = false;
	int32_t V_31 = 0;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		bool L_0 = __this->get_IsDestroyed_10();
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (IsDestroyed) { throw new Exception ("EcsWorld already destroyed."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEA8E3D47DA899F90008EA38068C06006FD0EF74F)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_0017:
	{
		// if (typeIdx < 0) {
		int32_t L_3 = ___typeIdx0;
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0170;
		}
	}
	{
		// if (FilterByIncludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_5 = __this->get_FilterByIncludedComponents_4();
		int32_t L_6 = ___typeIdx0;
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_5, ((-L_6)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_00c4;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_4 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_9 = V_0;
		int32_t L_10 = L_9->get_Count_1();
		V_5 = L_10;
		goto IL_00b7;
	}

IL_0047:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_11 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_12 = L_11->get_Items_0();
		int32_t L_13 = V_4;
		int32_t L_14 = L_13;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_16 = ___entityData2;
		bool L_17;
		L_17 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_15, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_16, 0, /*hidden argument*/NULL);
		V_6 = L_17;
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00b0;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_19 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_20 = L_19->get_Items_0();
		int32_t L_21 = V_4;
		int32_t L_22 = L_21;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_23 = (L_20)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_22));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_24;
		L_24 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_23, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_25 = ___entity1;
		int32_t L_26;
		L_26 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_25, /*hidden argument*/NULL);
		bool L_27;
		L_27 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_24, L_26, (int32_t*)(&V_7), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_0088;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_7 = (-1);
	}

IL_0088:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_29 = V_7;
		V_9 = (bool)((((int32_t)L_29) < ((int32_t)0))? 1 : 0);
		bool L_30 = V_9;
		if (!L_30)
		{
			goto IL_009f;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t * L_31 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_009f:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_32 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_33 = L_32->get_Items_0();
		int32_t L_34 = V_4;
		int32_t L_35 = L_34;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_37 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_36, L_37);
	}

IL_00b0:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_38 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00b7:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_39 = V_4;
		int32_t L_40 = V_5;
		V_10 = (bool)((((int32_t)L_39) < ((int32_t)L_40))? 1 : 0);
		bool L_41 = V_10;
		if (L_41)
		{
			goto IL_0047;
		}
	}
	{
	}

IL_00c4:
	{
		// if (FilterByExcludedComponents.TryGetValue (-typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_42 = __this->get_FilterByExcludedComponents_5();
		int32_t L_43 = ___typeIdx0;
		bool L_44;
		L_44 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_42, ((-L_43)), (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_11 = L_44;
		bool L_45 = V_11;
		if (!L_45)
		{
			goto IL_016a;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_12 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_46 = V_0;
		int32_t L_47 = L_46->get_Count_1();
		V_13 = L_47;
		goto IL_015d;
	}

IL_00ea:
	{
		// if (filters.Items[i].IsCompatible (entityData, typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_48 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_49 = L_48->get_Items_0();
		int32_t L_50 = V_12;
		int32_t L_51 = L_50;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_52 = (L_49)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_53 = ___entityData2;
		int32_t L_54 = ___typeIdx0;
		bool L_55;
		L_55 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_52, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_53, L_54, /*hidden argument*/NULL);
		V_14 = L_55;
		bool L_56 = V_14;
		if (!L_56)
		{
			goto IL_0156;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_57 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_58 = L_57->get_Items_0();
		int32_t L_59 = V_12;
		int32_t L_60 = L_59;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_61 = (L_58)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_60));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_62;
		L_62 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_61, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_63 = ___entity1;
		int32_t L_64;
		L_64 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_63, /*hidden argument*/NULL);
		bool L_65;
		L_65 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_62, L_64, (int32_t*)(&V_15), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_65) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_16;
		if (!L_66)
		{
			goto IL_012b;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_15 = (-1);
	}

IL_012b:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_67 = V_15;
		V_17 = (bool)((((int32_t)((((int32_t)L_67) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_0145;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t * L_69 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_69, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_0145:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_70 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_71 = L_70->get_Items_0();
		int32_t L_72 = V_12;
		int32_t L_73 = L_72;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_74 = (L_71)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_73));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_75 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_74, L_75);
	}

IL_0156:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_76 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_015d:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_77 = V_12;
		int32_t L_78 = V_13;
		V_18 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_18;
		if (L_79)
		{
			goto IL_00ea;
		}
	}
	{
	}

IL_016a:
	{
		goto IL_02ba;
	}

IL_0170:
	{
		// if (FilterByIncludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_80 = __this->get_FilterByIncludedComponents_4();
		int32_t L_81 = ___typeIdx0;
		bool L_82;
		L_82 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_80, L_81, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_19 = L_82;
		bool L_83 = V_19;
		if (!L_83)
		{
			goto IL_0216;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_20 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_84 = V_0;
		int32_t L_85 = L_84->get_Count_1();
		V_21 = L_85;
		goto IL_0209;
	}

IL_0196:
	{
		// if (filters.Items[i].IsCompatible (entityData, 0)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_86 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_87 = L_86->get_Items_0();
		int32_t L_88 = V_20;
		int32_t L_89 = L_88;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_90 = (L_87)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_89));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_91 = ___entityData2;
		bool L_92;
		L_92 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_90, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_91, 0, /*hidden argument*/NULL);
		V_22 = L_92;
		bool L_93 = V_22;
		if (!L_93)
		{
			goto IL_0202;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_94 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_95 = L_94->get_Items_0();
		int32_t L_96 = V_20;
		int32_t L_97 = L_96;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_98 = (L_95)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_97));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_99;
		L_99 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_98, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_100 = ___entity1;
		int32_t L_101;
		L_101 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_100, /*hidden argument*/NULL);
		bool L_102;
		L_102 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_99, L_101, (int32_t*)(&V_23), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_24 = (bool)((((int32_t)L_102) == ((int32_t)0))? 1 : 0);
		bool L_103 = V_24;
		if (!L_103)
		{
			goto IL_01d7;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_23 = (-1);
	}

IL_01d7:
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		int32_t L_104 = V_23;
		V_25 = (bool)((((int32_t)((((int32_t)L_104) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_105 = V_25;
		if (!L_105)
		{
			goto IL_01f1;
		}
	}
	{
		// if (filterIdx >= 0) { throw new Exception ("Entity already in filter."); }
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE7C889CD3951CB5AE334AE0DE08667B43AAA6556)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_01f1:
	{
		// filters.Items[i].OnAddEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_107 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_108 = L_107->get_Items_0();
		int32_t L_109 = V_20;
		int32_t L_110 = L_109;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_111 = (L_108)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_110));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_112 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_111, L_112);
	}

IL_0202:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_113 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
	}

IL_0209:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_114 = V_20;
		int32_t L_115 = V_21;
		V_26 = (bool)((((int32_t)L_114) < ((int32_t)L_115))? 1 : 0);
		bool L_116 = V_26;
		if (L_116)
		{
			goto IL_0196;
		}
	}
	{
	}

IL_0216:
	{
		// if (FilterByExcludedComponents.TryGetValue (typeIdx, out filters)) {
		Dictionary_2_tF6AD615EF423781C8D9E566740ECF9A020C23257 * L_117 = __this->get_FilterByExcludedComponents_5();
		int32_t L_118 = ___typeIdx0;
		bool L_119;
		L_119 = Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06(L_117, L_118, (EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2C4C26538F3B565400B0D997CDD3D27DFAE38D06_RuntimeMethod_var);
		V_27 = L_119;
		bool L_120 = V_27;
		if (!L_120)
		{
			goto IL_02b9;
		}
	}
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		V_28 = 0;
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_121 = V_0;
		int32_t L_122 = L_121->get_Count_1();
		V_29 = L_122;
		goto IL_02ac;
	}

IL_023b:
	{
		// if (filters.Items[i].IsCompatible (entityData, -typeIdx)) {
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_123 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_124 = L_123->get_Items_0();
		int32_t L_125 = V_28;
		int32_t L_126 = L_125;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_127 = (L_124)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_126));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_128 = ___entityData2;
		int32_t L_129 = ___typeIdx0;
		bool L_130;
		L_130 = EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline(L_127, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_128, ((-L_129)), /*hidden argument*/NULL);
		V_30 = L_130;
		bool L_131 = V_30;
		if (!L_131)
		{
			goto IL_02a5;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_132 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_133 = L_132->get_Items_0();
		int32_t L_134 = V_28;
		int32_t L_135 = L_134;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_136 = (L_133)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_135));
		Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * L_137;
		L_137 = EcsFilter_GetInternalEntitiesMap_m0D9C79F01A05727DCC2BF93C6946AA90ABC34C21(L_136, /*hidden argument*/NULL);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_138 = ___entity1;
		int32_t L_139;
		L_139 = EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline((EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_138, /*hidden argument*/NULL);
		bool L_140;
		L_140 = Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026(L_137, L_139, (int32_t*)(&V_31), /*hidden argument*/Dictionary_2_TryGetValue_m45CAE7F726F1B8F052F341A1B4F87684B1D08026_RuntimeMethod_var);
		V_32 = (bool)((((int32_t)L_140) == ((int32_t)0))? 1 : 0);
		bool L_141 = V_32;
		if (!L_141)
		{
			goto IL_027d;
		}
	}
	{
		// if (!filters.Items[i].GetInternalEntitiesMap ().TryGetValue (entity.GetInternalId (), out var filterIdx)) { filterIdx = -1; }
		V_31 = (-1);
	}

IL_027d:
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		int32_t L_142 = V_31;
		V_33 = (bool)((((int32_t)L_142) < ((int32_t)0))? 1 : 0);
		bool L_143 = V_33;
		if (!L_143)
		{
			goto IL_0294;
		}
	}
	{
		// if (filterIdx < 0) { throw new Exception ("Entity not in filter."); }
		Exception_t * L_144 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_144, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6257718D2302FD68D301F831D5DD87D21396E6FC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_RuntimeMethod_var)));
	}

IL_0294:
	{
		// filters.Items[i].OnRemoveEntity (entity);
		EcsGrowList_1_t30305CBA23B3E3C1640D0008F9ED62A86429D727 * L_145 = V_0;
		EcsFilterU5BU5D_tE7B0EFA88F05C7729DB5D958BD40677D9CDEF7D8* L_146 = L_145->get_Items_0();
		int32_t L_147 = V_28;
		int32_t L_148 = L_147;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_149 = (L_146)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_148));
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_150 = ___entity1;
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, L_149, L_150);
	}

IL_02a5:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_151 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
	}

IL_02ac:
	{
		// for (int i = 0, iMax = filters.Count; i < iMax; i++) {
		int32_t L_152 = V_28;
		int32_t L_153 = V_29;
		V_34 = (bool)((((int32_t)L_152) < ((int32_t)L_153))? 1 : 0);
		bool L_154 = V_34;
		if (L_154)
		{
			goto IL_023b;
		}
	}
	{
	}

IL_02b9:
	{
	}

IL_02ba:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_AreEquals_mAE4FBAF8A9B3947C16DFE6825609F26E577705FD_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___lhs0, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return lhs.Id == rhs.Id && lhs.Gen == rhs.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___lhs0;
		int32_t L_1 = L_0->get_Id_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___rhs1;
		int32_t L_3 = L_2->get_Id_0();
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_001f;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___lhs0;
		uint16_t L_5 = L_4->get_Gen_1();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___rhs1;
		uint16_t L_7 = L_6->get_Gen_1();
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)L_7))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 0;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * V_0 = NULL;
	EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	{
		// ref var entityData = ref entity.Owner.GetEntityData (entity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_3;
		L_3 = EcsWorld_GetEntityData_m3F3E657A3804CCDF7096735EF550AF12C0E846BD_inline(L_1, (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)L_2, /*hidden argument*/NULL);
		V_0 = (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_3;
		// savedEntity.Id = entity.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_4 = ___entity0;
		int32_t L_5 = L_4->get_Id_0();
		(&V_1)->set_Id_0(L_5);
		// savedEntity.Gen = entity.Gen;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_6 = ___entity0;
		uint16_t L_7 = L_6->get_Gen_1();
		(&V_1)->set_Gen_1(L_7);
		// savedEntity.Owner = entity.Owner;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_8 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_9 = L_8->get_Owner_2();
		(&V_1)->set_Owner_2(L_9);
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_10 = V_0;
		uint16_t L_11 = L_10->get_Gen_0();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_12 = ___entity0;
		uint16_t L_13 = L_12->get_Gen_1();
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0056;
		}
	}
	{
		// if (entityData.Gen != entity.Gen) { throw new Exception ("Cant touch destroyed entity."); }
		Exception_t * L_15 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F6A0CE0FC9A511BCFFC553063AC3CBAA2D1E47D)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsEntityExtensions_Destroy_mC0A71595D1F8B6E285FB9D74D32FE24C5EB0B9E6_RuntimeMethod_var)));
	}

IL_0056:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_16 = V_0;
		int16_t L_17 = L_16->get_ComponentsCountX2_1();
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)2));
		goto IL_00f2;
	}

IL_0064:
	{
		// savedEntity.Owner.UpdateFilters (-entityData.Components[i], savedEntity, entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_18 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_19 = L_18.get_Owner_2();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_20 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = L_20->get_Components_2();
		int32_t L_22 = V_3;
		int32_t L_23 = L_22;
		int32_t L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_25 = V_0;
		EcsWorld_UpdateFilters_m46E85B572CF76FAAB05F66618476531BB6D1FCD9_inline(L_19, ((-L_24)), (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 *)(&V_1), (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_25, /*hidden argument*/NULL);
		// savedEntity.Owner.ComponentPools[entityData.Components[i]].Recycle (entityData.Components[i + 1]);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_26 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_27 = L_26.get_Owner_2();
		IEcsComponentPoolU5BU5D_t81FCE8B70E6279EF8C004422CDD561376A68FFA1* L_28 = L_27->get_ComponentPools_9();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_29 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = L_29->get_Components_2();
		int32_t L_31 = V_3;
		int32_t L_32 = L_31;
		int32_t L_33 = (L_30)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_32));
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_37 = L_36->get_Components_2();
		int32_t L_38 = V_3;
		int32_t L_39 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
		int32_t L_40 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_39));
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void Leopotam.Ecs.IEcsComponentPool::Recycle(System.Int32) */, IEcsComponentPool_tF8C240B57337FB336BFD23E3DC642E6257109EAD_il2cpp_TypeInfo_var, L_35, L_40);
		// entityData.ComponentsCountX2 -= 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_41 = V_0;
		int16_t* L_42 = L_41->get_address_of_ComponentsCountX2_1();
		int16_t* L_43 = L_42;
		int32_t L_44 = *((int16_t*)L_43);
		*((int16_t*)L_43) = (int16_t)((int16_t)((int16_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)2))));
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_4 = 0;
		goto IL_00d3;
	}

IL_00b2:
	{
		// savedEntity.Owner.DebugListeners[ii].OnComponentListChanged (savedEntity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_45 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_46 = L_45.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_47 = L_46->get_DebugListeners_11();
		int32_t L_48 = V_4;
		RuntimeObject* L_49;
		L_49 = List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline(L_47, L_48, /*hidden argument*/List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_50 = V_1;
		InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(3 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnComponentListChanged(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_49, L_50);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_00d3:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_52 = V_4;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_53 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_54 = L_53.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_55 = L_54->get_DebugListeners_11();
		int32_t L_56;
		L_56 = List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline(L_55, /*hidden argument*/List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)L_52) < ((int32_t)L_56))? 1 : 0);
		bool L_57 = V_5;
		if (L_57)
		{
			goto IL_00b2;
		}
	}
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_58 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_58, (int32_t)2));
	}

IL_00f2:
	{
		// for (var i = entityData.ComponentsCountX2 - 2; i >= 0; i -= 2) {
		int32_t L_59 = V_3;
		V_6 = (bool)((((int32_t)((((int32_t)L_59) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_60 = V_6;
		if (L_60)
		{
			goto IL_0064;
		}
	}
	{
		// entityData.ComponentsCountX2 = 0;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_61 = V_0;
		L_61->set_ComponentsCountX2_1((int16_t)0);
		// savedEntity.Owner.RecycleEntityData (savedEntity.Id, ref entityData);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_62 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_63 = L_62.get_Owner_2();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_64 = V_1;
		int32_t L_65 = L_64.get_Id_0();
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_66 = V_0;
		EcsWorld_RecycleEntityData_mD43B973684318F6A18A949CC46B8D8433F1B6B43(L_63, L_65, (EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 *)L_66, /*hidden argument*/NULL);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		V_7 = 0;
		goto IL_0142;
	}

IL_0121:
	{
		// savedEntity.Owner.DebugListeners[ii].OnEntityDestroyed (savedEntity);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_67 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_68 = L_67.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_69 = L_68->get_DebugListeners_11();
		int32_t L_70 = V_7;
		RuntimeObject* L_71;
		L_71 = List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_inline(L_69, L_70, /*hidden argument*/List_1_get_Item_m63DA20D811ADCF3A4AF45E74902BD83F3287F1A1_RuntimeMethod_var);
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_72 = V_1;
		InterfaceActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  >::Invoke(1 /* System.Void Leopotam.Ecs.IEcsWorldDebugListener::OnEntityDestroyed(Leopotam.Ecs.EcsEntity) */, IEcsWorldDebugListener_tCB0A020A7808B1E846ECE1D0FF550E4D02909932_il2cpp_TypeInfo_var, L_71, L_72);
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_73 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0142:
	{
		// for (var ii = 0; ii < savedEntity.Owner.DebugListeners.Count; ii++) {
		int32_t L_74 = V_7;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_75 = V_1;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_76 = L_75.get_Owner_2();
		List_1_t8B53F37BBEF67C46A8ADF77147557649D56A194E * L_77 = L_76->get_DebugListeners_11();
		int32_t L_78;
		L_78 = List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_inline(L_77, /*hidden argument*/List_1_get_Count_mAF1D064A9BE0F6BD165023EECDAE06EB05816913_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_74) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_8;
		if (L_79)
		{
			goto IL_0121;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsEntityExtensions_IsWorldAlive_mF0651EC2A3F8CF8E9F77882033A4DAD1D5557047_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return entity.Owner != null && entity.Owner.IsAlive ();
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_1 = L_0->get_Owner_2();
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_2 = ___entity0;
		EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * L_3 = L_2->get_Owner_2();
		bool L_4;
		L_4 = EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
	}

IL_0017:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsWorld_IsAlive_mA6EC771EB7E874E662369960BF81F2F1065BEA08_inline (EcsWorld_t25CFF9C4BE010A0488092939558D72F547CB4C19 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// return !IsDestroyed;
		bool L_0 = __this->get_IsDestroyed_10();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator__ctor_m24FEE0FF13998645F3FCE9773D76DEB6596F919D_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * ___filter0, const RuntimeMethod* method)
{
	{
		// _filter = filter;
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = ___filter0;
		__this->set__filter_0(L_0);
		// _count = _filter.GetEntitiesCount ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_1 = __this->get__filter_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline(L_1, /*hidden argument*/NULL);
		__this->set__count_1(L_2);
		// _idx = -1;
		__this->set__idx_2((-1));
		// _filter.Lock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_3 = __this->get__filter_0();
		NullCheck(L_3);
		EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool EcsFilter_IsCompatible_m67AA1E7E2DDBEB433872DF1EB8F0A83E3EDA0AB2_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * ___entityData0, int32_t ___addedRemovedTypeIndex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B26_0 = 0;
	{
		// var incIdx = IncludedTypeIndices.Length - 1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_IncludedTypeIndices_7();
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), (int32_t)1));
		goto IL_0074;
	}

IL_000e:
	{
		// var typeIdx = IncludedTypeIndices[incIdx];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_IncludedTypeIndices_7();
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		// var idx = entityData.ComponentsCountX2 - 2;
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_5 = ___entityData0;
		int16_t L_6 = L_5->get_ComponentsCountX2_1();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)2));
		goto IL_0054;
	}

IL_0023:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_7 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7->get_Components_2();
		int32_t L_9 = V_2;
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_12 = V_3;
		int32_t L_13 = ___addedRemovedTypeIndex1;
		V_4 = (bool)((((int32_t)L_12) == ((int32_t)((-L_13))))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_003b;
		}
	}
	{
		// continue;
		goto IL_0050;
	}

IL_003b:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_15 = V_3;
		int32_t L_16 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_15) == ((int32_t)L_16)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_17 = V_3;
		int32_t L_18 = V_1;
		G_B7_0 = ((((int32_t)L_17) == ((int32_t)L_18))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B7_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B7_0;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_004f;
		}
	}
	{
		// break;
		goto IL_0061;
	}

IL_004f:
	{
	}

IL_0050:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)2));
	}

IL_0054:
	{
		// for (; idx >= 0; idx -= 2) {
		int32_t L_21 = V_2;
		V_6 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_6;
		if (L_22)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		// if (idx == -2) {
		int32_t L_23 = V_2;
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)((int32_t)-2)))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_006f;
		}
	}
	{
		// break;
		goto IL_0081;
	}

IL_006f:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)1));
	}

IL_0074:
	{
		// for (; incIdx >= 0; incIdx--) {
		int32_t L_26 = V_0;
		V_8 = (bool)((((int32_t)((((int32_t)L_26) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_27 = V_8;
		if (L_27)
		{
			goto IL_000e;
		}
	}

IL_0081:
	{
		// if (incIdx != -1) {
		int32_t L_28 = V_0;
		V_9 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_0097;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_0097:
	{
		// if (ExcludedTypeIndices != null) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = __this->get_ExcludedTypeIndices_8();
		V_11 = (bool)((!(((RuntimeObject*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_30) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_31 = V_11;
		if (!L_31)
		{
			goto IL_012b;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		V_12 = 0;
		goto IL_0118;
	}

IL_00af:
	{
		// var typeIdx = ExcludedTypeIndices[excIdx];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = __this->get_ExcludedTypeIndices_8();
		int32_t L_33 = V_12;
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		V_13 = L_35;
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_36 = ___entityData0;
		int16_t L_37 = L_36->get_ComponentsCountX2_1();
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)2));
		goto IL_0103;
	}

IL_00c7:
	{
		// var typeIdx2 = entityData.Components[idx];
		EcsEntityData_tE423F5BE36FFB2DC8D1CC6CEF2FE9233D8F599A3 * L_38 = ___entityData0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = L_38->get_Components_2();
		int32_t L_40 = V_14;
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_41));
		V_15 = L_42;
		// if (typeIdx2 == -addedRemovedTypeIndex) {
		int32_t L_43 = V_15;
		int32_t L_44 = ___addedRemovedTypeIndex1;
		V_16 = (bool)((((int32_t)L_43) == ((int32_t)((-L_44))))? 1 : 0);
		bool L_45 = V_16;
		if (!L_45)
		{
			goto IL_00e2;
		}
	}
	{
		// continue;
		goto IL_00fd;
	}

IL_00e2:
	{
		// if (typeIdx2 == addedRemovedTypeIndex || typeIdx2 == typeIdx) {
		int32_t L_46 = V_15;
		int32_t L_47 = ___addedRemovedTypeIndex1;
		if ((((int32_t)L_46) == ((int32_t)L_47)))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_48 = V_15;
		int32_t L_49 = V_13;
		G_B26_0 = ((((int32_t)L_48) == ((int32_t)L_49))? 1 : 0);
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B26_0 = 1;
	}

IL_00f0:
	{
		V_17 = (bool)G_B26_0;
		bool L_50 = V_17;
		if (!L_50)
		{
			goto IL_00fc;
		}
	}
	{
		// return false;
		V_10 = (bool)0;
		goto IL_0130;
	}

IL_00fc:
	{
	}

IL_00fd:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_51 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)2));
	}

IL_0103:
	{
		// for (var idx = entityData.ComponentsCountX2 - 2; idx >= 0; idx -= 2) {
		int32_t L_52 = V_14;
		V_18 = (bool)((((int32_t)((((int32_t)L_52) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_53 = V_18;
		if (L_53)
		{
			goto IL_00c7;
		}
	}
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_54 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_0118:
	{
		// for (var excIdx = 0; excIdx < ExcludedTypeIndices.Length; excIdx++) {
		int32_t L_55 = V_12;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = __this->get_ExcludedTypeIndices_8();
		V_19 = (bool)((((int32_t)L_55) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))? 1 : 0);
		bool L_57 = V_19;
		if (L_57)
		{
			goto IL_00af;
		}
	}
	{
	}

IL_012b:
	{
		// return true;
		V_10 = (bool)1;
		goto IL_0130;
	}

IL_0130:
	{
		// }
		bool L_58 = V_10;
		return L_58;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsEntityExtensions_GetInternalId_m7733CD1273D5A6BB7513AF247FD8F166FF237A91_inline (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * ___entity0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return entity.Id;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_0 = ___entity0;
		int32_t L_1 = L_0->get_Id_0();
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Option_m9BE90B21512D8A7424CCD9EDA3AB81A5DDC688F5_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public Option Option { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3COptionU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Il2CppSetOptionAttribute_set_Value_mD5CAA39F97C19D1B1D2BCA508F564F788D32D824_inline (Il2CppSetOptionAttribute_tB0CE3422025734ED6A833C8CB969A7FAEF251445 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		// public object Value { get; private set; }
		RuntimeObject * L_0 = ___value0;
		__this->set_U3CValueU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t EcsFilter_GetEntitiesCount_mF2966ADF6E5F72ED882840EE4E3B18E98DF480A7_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return EntitiesCount;
		int32_t L_0 = __this->get_EntitiesCount_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Lock_m62CDA8BE1EE1C0251A278608217B8A9033BAFAEB_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	{
		// LockCount++;
		int32_t L_0 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mFB25F9D4A7953829F59C05BDFE39072FDC067323_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// get => _idx;
		int32_t L_0 = __this->get__idx_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline (EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B5_0 = 0;
	{
		// if (LockCount <= 0) {
		int32_t L_0 = __this->get_LockCount_3();
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		// throw new Exception ($"Invalid lock-unlock balance for \"{GetType ().Name}\".");
		Type_t * L_2;
		L_2 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42421D059AAE096C7B60839ABFEB44B5C73C66C4)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral606C771900936C652E7DC0D284530387D5ED57D1)), /*hidden argument*/NULL);
		Exception_t * L_5 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_5, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_RuntimeMethod_var)));
	}

IL_0032:
	{
		// LockCount--;
		int32_t L_6 = __this->get_LockCount_3();
		__this->set_LockCount_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		// if (LockCount == 0 && _delayedOpsCount > 0) {
		int32_t L_7 = __this->get_LockCount_3();
		if (L_7)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_8 = __this->get__delayedOpsCount_6();
		G_B5_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_0054;
	}

IL_0053:
	{
		G_B5_0 = 0;
	}

IL_0054:
	{
		V_1 = (bool)G_B5_0;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_00b9;
		}
	}
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		V_2 = 0;
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_10 = __this->get__delayedOpsCount_6();
		V_3 = L_10;
		goto IL_00a7;
	}

IL_0064:
	{
		// ref var op = ref _delayedOps[i];
		DelayedOpU5BU5D_tAA544EE0CD168A03193E8BBA0EDDF8FFD12C6AB2* L_11 = __this->get__delayedOps_5();
		int32_t L_12 = V_2;
		V_4 = (DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 *)((L_11)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_12)));
		// if (op.IsAdd) {
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_13 = V_4;
		bool L_14 = L_13->get_IsAdd_0();
		V_5 = L_14;
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		// OnAddEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_16 = V_4;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_17 = L_16->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(5 /* System.Void Leopotam.Ecs.EcsFilter::OnAddEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_17);
		goto IL_00a2;
	}

IL_0092:
	{
		// OnRemoveEntity (op.Entity);
		DelayedOp_t7328D7C602D61D7D265F2908A5B9A84C61FC9812 * L_18 = V_4;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * L_19 = L_18->get_address_of_Entity_1();
		VirtActionInvoker1< EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 * >::Invoke(6 /* System.Void Leopotam.Ecs.EcsFilter::OnRemoveEntity(Leopotam.Ecs.EcsEntity& modreq(System.Runtime.InteropServices.InAttribute)) */, __this, L_19);
	}

IL_00a2:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00a7:
	{
		// for (int i = 0, iMax = _delayedOpsCount; i < iMax; i++) {
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_0064;
		}
	}
	{
		// _delayedOpsCount = 0;
		__this->set__delayedOpsCount_6(0);
	}

IL_00b9:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_Dispose_m569EC4F9DC87367F1A9DF4F54465FEFD31EA4CF7_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	{
		// _filter.Unlock ();
		EcsFilter_t040F5B7F38EC40ACF6EE161A9050F11B20CB2C55 * L_0 = __this->get__filter_0();
		EcsFilter_Unlock_m3E0AEE4273F2C6A9FC389FB4801C5B152B8219A6_inline(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC5FDC234DF5C36430FFCC640395FB66F1A490F8A_inline (Enumerator_tC5617BA2B03734AE5FF345B399CEFFA66E19E48C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// return ++_idx < _count;
		int32_t L_0 = __this->get__idx_2();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1));
		int32_t L_1 = V_0;
		__this->set__idx_2(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->get__count_1();
		V_1 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public EcsGrowList (int capacity) {
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		int32_t L_0 = ___capacity0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsGrowList_1__ctor_m5F0691597ED4873A451968C8E2735B9C20382DA2_RuntimeMethod_var)));
	}

IL_001f:
	{
		// Items = new T[capacity];
		int32_t L_3 = ___capacity0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_3);
		__this->set_Items_0(L_4);
		// Count = 0;
		__this->set_Count_1(0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m9D7804B6366AF1BE2BC90590C75D811D5D20677B_gshared_inline (EcsGrowList_1_t6A679BCBEB97469B2AB6207D7C10E67CC96CB857 * __this, RuntimeObject * ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (Items.Length == Count) {
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_Items_0();
		NullCheck(L_0);
		int32_t L_1 = (int32_t)__this->get_Count_1();
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)__this->get_address_of_Items_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_Items_0();
		NullCheck(L_4);
		((  void (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE**)L_3, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))<<(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002d:
	{
		// Items[Count++] = item;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_Items_0();
		int32_t L_6 = (int32_t)__this->get_Count_1();
		V_1 = (int32_t)L_6;
		int32_t L_7 = V_1;
		__this->set_Count_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_1;
		RuntimeObject * L_9 = ___item0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject *)L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_gshared_inline (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public EcsGrowList (int capacity) {
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		int32_t L_0 = ___capacity0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsGrowList_1__ctor_m764E7FCD6AE00A82B221B5ED8508CEC5044351AB_RuntimeMethod_var)));
	}

IL_001f:
	{
		// Items = new T[capacity];
		int32_t L_3 = ___capacity0;
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_4 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_3);
		__this->set_Items_0(L_4);
		// Count = 0;
		__this->set_Count_1(0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// public EcsGrowList (int capacity) {
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		int32_t L_0 = ___capacity0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (capacity <= 0) { throw new Exception ("Capacity should be greater than zero."); }
		Exception_t * L_2 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2E422EB4772F1976D4425CDE7F443C68DE946D68)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EcsGrowList_1__ctor_mB598925944E7AC6047B42664BE741B98DD2A5F55_RuntimeMethod_var)));
	}

IL_001f:
	{
		// Items = new T[capacity];
		int32_t L_3 = ___capacity0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_3);
		__this->set_Items_0(L_4);
		// Count = 0;
		__this->set_Count_1(0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m2BFBCDA2829A7B2DD23D67C6FA6FACDB80042B37_gshared_inline (EcsGrowList_1_t3125A5E8CF42D922F1956351A68628421AA0D91F * __this, EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (Items.Length == Count) {
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_0 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)__this->get_Items_0();
		NullCheck(L_0);
		int32_t L_1 = (int32_t)__this->get_Count_1();
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7** L_3 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7**)__this->get_address_of_Items_0();
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_4 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)__this->get_Items_0();
		NullCheck(L_4);
		((  void (*) (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7**)(EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7**)L_3, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))<<(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002d:
	{
		// Items[Count++] = item;
		EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7* L_5 = (EcsEntityU5BU5D_tE25256E18B34968FBCFC4E04A66FC2F8B7DE6EF7*)__this->get_Items_0();
		int32_t L_6 = (int32_t)__this->get_Count_1();
		V_1 = (int32_t)L_6;
		int32_t L_7 = V_1;
		__this->set_Count_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_1;
		EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0  L_9 = ___item0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EcsEntity_t72E809A570A9DBA4BC136237BEF38F77BE07ABC0 )L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EcsGrowList_1_Add_m3D1223CECC6FA6555E67B6EBBF73897F7BDA37E8_gshared_inline (EcsGrowList_1_t81692E6D3E503B1AC9B5CC7DFDDDA11B756AE41A * __this, int32_t ___item0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		// if (Items.Length == Count) {
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Items_0();
		NullCheck(L_0);
		int32_t L_1 = (int32_t)__this->get_Count_1();
		V_0 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) == ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// Array.Resize (ref Items, Items.Length << 1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)__this->get_address_of_Items_0();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Items_0();
		NullCheck(L_4);
		((  void (*) (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)L_3, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))<<(int32_t)1)), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
	}

IL_002d:
	{
		// Items[Count++] = item;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_Items_0();
		int32_t L_6 = (int32_t)__this->get_Count_1();
		V_1 = (int32_t)L_6;
		int32_t L_7 = V_1;
		__this->set_Count_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		int32_t L_8 = V_1;
		int32_t L_9 = ___item0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		// }
		return;
	}
}
