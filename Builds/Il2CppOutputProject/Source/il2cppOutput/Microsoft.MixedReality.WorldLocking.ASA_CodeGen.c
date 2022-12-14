#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String Microsoft.MixedReality.WorldLocking.ASA.IBinder::get_Name()
// 0x00000002 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.IBinder::get_IsReady()
// 0x00000003 Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus Microsoft.MixedReality.WorldLocking.ASA.IBinder::get_PublisherStatus()
// 0x00000004 System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinCloudBinding> Microsoft.MixedReality.WorldLocking.ASA.IBinder::GetBindings()
// 0x00000005 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.IBinder::CreateBinding(System.String,System.String)
// 0x00000006 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.IBinder::RemoveBinding(System.String)
// 0x00000007 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.IBinder::Publish()
// 0x00000008 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.IBinder::Download()
// 0x00000009 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.IBinder::Search()
// 0x0000000A System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.IBinder::Clear()
// 0x0000000B System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.IBinder::Purge()
// 0x0000000C System.String Microsoft.MixedReality.WorldLocking.ASA.IBindingOracle::get_Name()
// 0x0000000D System.Boolean Microsoft.MixedReality.WorldLocking.ASA.IBindingOracle::Put(Microsoft.MixedReality.WorldLocking.ASA.IBinder)
// 0x0000000E System.Boolean Microsoft.MixedReality.WorldLocking.ASA.IBindingOracle::Get(Microsoft.MixedReality.WorldLocking.ASA.IBinder)
// 0x0000000F System.String Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg::get_Name()
// 0x00000010 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg::get_IsReadyForPublish()
// 0x00000011 UnityEngine.Pose Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg::get_GlobalPose()
// 0x00000012 System.Void Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties::.ctor(Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void LocalPegAndProperties__ctor_m2E1B8DF009D1FCACD11698293FABC3DCD091A78A (void);
// 0x00000013 System.Void Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus::.ctor()
extern void ReadinessStatus__ctor_mDC13B0D839BDA5BB3133E13C0C1079D569392647 (void);
// 0x00000014 System.Void Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus::.ctor(Microsoft.MixedReality.WorldLocking.ASA.PublisherReadiness)
extern void ReadinessStatus__ctor_mD88875F7E3781594E7B69C339E0348A040451750 (void);
// 0x00000015 System.Void Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus::.ctor(Microsoft.MixedReality.WorldLocking.ASA.PublisherReadiness,System.Single,System.Single)
extern void ReadinessStatus__ctor_m8158198B5451528424382D356FD0ACFB9FB046FC (void);
// 0x00000016 Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus Microsoft.MixedReality.WorldLocking.ASA.IPublisher::get_Status()
// 0x00000017 System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg> Microsoft.MixedReality.WorldLocking.ASA.IPublisher::CreateLocalPeg(System.String,UnityEngine.Pose)
// 0x00000018 System.Void Microsoft.MixedReality.WorldLocking.ASA.IPublisher::ReleaseLocalPeg(Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg)
// 0x00000019 System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.IPublisher::Create(Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties)
// 0x0000001A System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties> Microsoft.MixedReality.WorldLocking.ASA.IPublisher::Read(System.String)
// 0x0000001B System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.IPublisher::Read(System.Collections.Generic.IReadOnlyCollection`1<System.String>)
// 0x0000001C System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.IPublisher::Modify(System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties)
// 0x0000001D System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.IPublisher::Find(System.Single)
// 0x0000001E System.Threading.Tasks.Task Microsoft.MixedReality.WorldLocking.ASA.IPublisher::PurgeArea(System.Single)
// 0x0000001F System.Threading.Tasks.Task Microsoft.MixedReality.WorldLocking.ASA.IPublisher::Delete(System.String)
// 0x00000020 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_CoarseRelocationEnabled()
extern void PublisherASA_get_CoarseRelocationEnabled_m3B71B15FE3B822CE66C0ED49180138261ABA5426 (void);
// 0x00000021 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_CoarseRelocationEnabled(System.Boolean)
extern void PublisherASA_set_CoarseRelocationEnabled_m1A02EDBB45E0F16C9D07527A4DBC36DEBEC24EFC (void);
// 0x00000022 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_CoarseRelocPublishEnabled()
extern void PublisherASA_get_CoarseRelocPublishEnabled_m6DC5401389D09EF00B1FFDCC14126626FF682131 (void);
// 0x00000023 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_CoarseRelocPublishEnabled(System.Boolean)
extern void PublisherASA_set_CoarseRelocPublishEnabled_mC5094449A815552DE959371E91971043525CB5BE (void);
// 0x00000024 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_CoarseRelocUseWifi()
extern void PublisherASA_get_CoarseRelocUseWifi_mFAA7C189FCAB1D9E1401AEA934B3785C62A8414E (void);
// 0x00000025 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_CoarseRelocUseWifi(System.Boolean)
extern void PublisherASA_set_CoarseRelocUseWifi_m5DE62286A7BF973FC54FDADDFB4AAB3798E84496 (void);
// 0x00000026 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_CoarseRelocUseGPS()
extern void PublisherASA_get_CoarseRelocUseGPS_m096F16EEF3274F51C779A1B21B265D1C279D1925 (void);
// 0x00000027 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_CoarseRelocUseGPS(System.Boolean)
extern void PublisherASA_set_CoarseRelocUseGPS_mCC5A62799458FF8403E6A41F779A0D5CDFA64BA0 (void);
// 0x00000028 System.Collections.Generic.List`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_BeaconUuids()
extern void PublisherASA_get_BeaconUuids_mC9CE2B4D16C4E1E85B1B41DC35830D5F6F13240B (void);
// 0x00000029 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_CoarseRelocUseBluetooth()
extern void PublisherASA_get_CoarseRelocUseBluetooth_mB0DB3EEA5735F7B1D9CB3C8BAF809B4FEED22CDA (void);
// 0x0000002A UnityEngine.Transform Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_AnchorsParent()
extern void PublisherASA_get_AnchorsParent_mC31ABC6BCF8AE4E9E32235CB1192BE5C23BF3023 (void);
// 0x0000002B System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_AnchorsParent(UnityEngine.Transform)
extern void PublisherASA_set_AnchorsParent_mA58FF8FF8C6CEEFD3E1C9D194D6BEDCAE182639F (void);
// 0x0000002C UnityEngine.GameObject Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_AnchorsPrefab()
extern void PublisherASA_get_AnchorsPrefab_mD9BB056B69E5A56B0545672508D204FB05DD6CD3 (void);
// 0x0000002D System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_AnchorsPrefab(UnityEngine.GameObject)
extern void PublisherASA_set_AnchorsPrefab_m99C72E14618EC426839F6E3C27516D559203E688 (void);
// 0x0000002E System.Single Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_MaxSearchSeconds()
extern void PublisherASA_get_MaxSearchSeconds_m1F9FE8BD48DE157994CB262E9990FE6603749D42 (void);
// 0x0000002F System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_MaxSearchSeconds(System.Single)
extern void PublisherASA_set_MaxSearchSeconds_m72ABE9A7FC70B55149230775C6F835EB34715B69 (void);
// 0x00000030 System.Single Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_MaxWaitForMoreAnchorsSeconds()
extern void PublisherASA_get_MaxWaitForMoreAnchorsSeconds_mE3412687950F1746318376055A6FD93770BAA844 (void);
// 0x00000031 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_MaxWaitForMoreAnchorsSeconds(System.Single)
extern void PublisherASA_set_MaxWaitForMoreAnchorsSeconds_m78A77FE37112A87CE9C725F85F014F9C338F5737 (void);
// 0x00000032 System.Single Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_MinRecommendedForCreateProgress()
extern void PublisherASA_get_MinRecommendedForCreateProgress_m68661CBAE4A11E29FC496667398BAC167CF621E2 (void);
// 0x00000033 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::set_MinRecommendedForCreateProgress(System.Single)
extern void PublisherASA_set_MinRecommendedForCreateProgress_m0DEC2731B455804436C942B7AA1EFE5114F22C19 (void);
// 0x00000034 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_IsBusy()
extern void PublisherASA_get_IsBusy_m45D5724C3572E5D702DDA70F616196A5DA188574 (void);
// 0x00000035 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::Setup()
extern void PublisherASA_Setup_m4C1F736C8C6A85CD3ECC5D0C62E45BD8675C2210 (void);
// 0x00000036 Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::get_Status()
extern void PublisherASA_get_Status_m25AAD3B3041EFBF1716B156E6197BD685AAE5C66 (void);
// 0x00000037 System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::CreateLocalPeg(System.String,UnityEngine.Pose)
extern void PublisherASA_CreateLocalPeg_m2EBDC847F836DD007C06E6D6D8CD49098BDF6E32 (void);
// 0x00000038 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::ReleaseLocalPeg(Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg)
extern void PublisherASA_ReleaseLocalPeg_mF3F9DAF50C9E0362FFD7723F86CA82BEDCCE1D3A (void);
// 0x00000039 System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::Create(Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties)
extern void PublisherASA_Create_m34677EA84D8DB7A0C96DB179834AAE16F436CAD8 (void);
// 0x0000003A System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::Read(System.String)
extern void PublisherASA_Read_m898249D2C6843126A75101862A5665FC3EBFBF99 (void);
// 0x0000003B System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::Read(System.Collections.Generic.IReadOnlyCollection`1<System.String>)
extern void PublisherASA_Read_m263C84C5839909F8725DCB71D0E994C0AE570A4B (void);
// 0x0000003C System.Threading.Tasks.Task`1<System.String> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::Modify(System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties)
extern void PublisherASA_Modify_mA2D60A8975B5894B988E96A7E5B97552D933B08D (void);
// 0x0000003D System.Threading.Tasks.Task Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::Delete(System.String)
extern void PublisherASA_Delete_m690A4681549610C12F1528BEC7C41EB0904A71BE (void);
// 0x0000003E System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::Find(System.Single)
extern void PublisherASA_Find_m5024A48D23C7403DE9FEB13F30437E929093C388 (void);
// 0x0000003F System.Threading.Tasks.Task Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::PurgeArea(System.Single)
extern void PublisherASA_PurgeArea_m72F8BB029525A0B431AE9B630F35E2C08F0B129E (void);
// 0x00000040 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::LogASASetup(System.String)
extern void PublisherASA_LogASASetup_m31AD95784AA7074E21F3022EEA87274F5840490E (void);
// 0x00000041 System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::DownloadRecord(System.String)
extern void PublisherASA_DownloadRecord_m2931733120971D496913E159E6A991652510BCFD (void);
// 0x00000042 System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::SearchArea(System.Single)
extern void PublisherASA_SearchArea_mCDBE52034EFB7C86B85CA1650D59D51A2AF1D0A3 (void);
// 0x00000043 System.Threading.Tasks.Task`1<System.Collections.Generic.Dictionary`2<System.String,Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties>> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::DownloadList(System.Collections.Generic.IReadOnlyCollection`1<System.String>)
extern void PublisherASA_DownloadList_m4B8DAB2B9D9CCC17251BB71314EE923CD9FE8988 (void);
// 0x00000044 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord>> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::SearchForRecords(System.Single)
extern void PublisherASA_SearchForRecords_m16E730FED9D9EAF9FBCFAE8EC3631F7E934826AF (void);
// 0x00000045 System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord>> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::DownloadRecordList(System.Collections.Generic.IReadOnlyCollection`1<System.String>)
extern void PublisherASA_DownloadRecordList_m3F0B74A7A22083F4C03940795EE417857AC540D8 (void);
// 0x00000046 System.Threading.Tasks.Task Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::DeleteById(System.String)
extern void PublisherASA_DeleteById_m26833A01833198D0FB5677BA00C8BF2463D21F61 (void);
// 0x00000047 System.String[] Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::ExtractIdsForCriteria(System.Collections.Generic.IReadOnlyCollection`1<System.String>)
extern void PublisherASA_ExtractIdsForCriteria_mAD9B4A8216F3D16355FC52DFAD7063F7DEDD8791 (void);
// 0x00000048 Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::WrapReadiness()
extern void PublisherASA_WrapReadiness_mD9EA06B748D3234D98CBD469080F44FEC5D6C289 (void);
// 0x00000049 Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::CheckReadiness()
extern void PublisherASA_CheckReadiness_mD65E218567C858A1F8D610829404F233F1C2F3FF (void);
// 0x0000004A System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::IsReadyForCreate(Microsoft.Azure.SpatialAnchors.Unity.SpatialAnchorManager)
extern void PublisherASA_IsReadyForCreate_mB7BE61CFABFDB74149FFD3EAFDB08256C923BBF6 (void);
// 0x0000004B System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::WaitForARSession()
extern void PublisherASA_WaitForARSession_mF39C9FD013155930BF3F5BBE75E3DD02F66769F5 (void);
// 0x0000004C System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/LocalPeg> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::InternalCreateLocalPeg(System.String,UnityEngine.Pose)
extern void PublisherASA_InternalCreateLocalPeg_m21C4B5B7F16D0C207074D4180336EBED70A75053 (void);
// 0x0000004D System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::AddRecord(System.String,Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord)
extern void PublisherASA_AddRecord_m008266669DD1CFB30BAD9F53B54358EF8C0EE3CE (void);
// 0x0000004E Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::GetRecord(System.String)
extern void PublisherASA_GetRecord_mF1A6635855723DD8EA08CA0E77683A3AAB1CA0F9 (void);
// 0x0000004F Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::DeleteRecord(System.String)
extern void PublisherASA_DeleteRecord_m43A18CCAD5D39BE30625A4706AB20B7720D14DAD (void);
// 0x00000050 System.Threading.Tasks.Task`1<Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord> Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::RecordFromCloud(Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord)
extern void PublisherASA_RecordFromCloud_m7BF423B98C6D5AA546A50D530706006A232BEB4A (void);
// 0x00000051 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::OnAnchorLocated(System.Object,Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs)
extern void PublisherASA_OnAnchorLocated_mCFB15C15F73593084E6006696188A4F70C1AECFD (void);
// 0x00000052 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::OnAnchorLocateCompleted(System.Object,Microsoft.Azure.SpatialAnchors.LocateAnchorsCompletedEventArgs)
extern void PublisherASA_OnAnchorLocateCompleted_mFA8833DB1887AD9AA51B1CBBC48E540BCCEC3679 (void);
// 0x00000053 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::OnASALog(System.Object,Microsoft.Azure.SpatialAnchors.OnLogDebugEventArgs)
extern void PublisherASA_OnASALog_mB69BD1607AE90CE275D402CCAF130E7DD0DDFE96 (void);
// 0x00000054 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::OnASAError(System.Object,Microsoft.Azure.SpatialAnchors.SessionErrorEventArgs)
extern void PublisherASA_OnASAError_mFCC74824C18E17DA164616A1A767EFC4A8ADA363 (void);
// 0x00000055 Microsoft.Azure.SpatialAnchors.PlatformLocationProvider Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::CreateLocationProvider()
extern void PublisherASA_CreateLocationProvider_m889272A228327DDF3EE16DDF608E7905A93C05CC (void);
// 0x00000056 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::LocationReady(Microsoft.MixedReality.WorldLocking.ASA.PublisherReadiness)
extern void PublisherASA_LocationReady_mCA89CB46E53AACD6D7729E4A9912340607EF31C6 (void);
// 0x00000057 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::AcquireBusy(System.String)
extern void PublisherASA_AcquireBusy_m7C63BFEDBB8941392E8D9F3485CFE4539EE1232A (void);
// 0x00000058 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::ReleaseBusy()
extern void PublisherASA_ReleaseBusy_m439E9BA9A93CC3D5FCBDFD7E29F2CB786255EDDA (void);
// 0x00000059 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::.ctor()
extern void PublisherASA__ctor_m8F8DC447D8283DEB737A3BFA6DFDFA9C3090180F (void);
// 0x0000005A System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA::.cctor()
extern void PublisherASA__cctor_mC6F3A0B0AB6A8800E6B7939AD7309D82E6C7E5B0 (void);
// 0x0000005B Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord::GetPegWithProperties()
extern void AnchorRecord_GetPegWithProperties_mCD339A78F905B5E85EC074E62229A2722779C4D5 (void);
// 0x0000005C System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord::DebugLog(Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord,System.String)
extern void AnchorRecord_DebugLog_mD7BEDD1436B0F0B66B22A9C73FC4F748694853F8 (void);
// 0x0000005D System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord::.ctor()
extern void AnchorRecord__ctor_m6F376E82FEE6D1691017F830BC988B26CBD9F7A6 (void);
// 0x0000005E UnityEngine.XR.ARFoundation.ARAnchor Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/LocalPeg::get_NativeAnchor()
extern void LocalPeg_get_NativeAnchor_m1DDF042D2952504C50C7286156BCD040D20495BF (void);
// 0x0000005F System.String Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/LocalPeg::get_Name()
extern void LocalPeg_get_Name_m07867D809B055ABE8D01948E3E5E4A609999487D (void);
// 0x00000060 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/LocalPeg::set_Name(System.String)
extern void LocalPeg_set_Name_m706025715A3A6E92DB8EFE3209E6E0A03EF987A1 (void);
// 0x00000061 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/LocalPeg::get_IsReadyForPublish()
extern void LocalPeg_get_IsReadyForPublish_m3BA1D6D14E29D066DC3343632C57F5278D89B9EA (void);
// 0x00000062 UnityEngine.Pose Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/LocalPeg::get_GlobalPose()
extern void LocalPeg_get_GlobalPose_mE67A9E17062810F938B110A68C8C5C8A60B866F2 (void);
// 0x00000063 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/LocalPeg::.ctor()
extern void LocalPeg__ctor_m0B2B52B6047DBF51E7E6D4C2E3D1B2DE59433A67 (void);
// 0x00000064 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Setup>d__55::.ctor()
extern void U3CSetupU3Ed__55__ctor_m4A42761E5A71F4406D5EC65953CF1574B3B310EB (void);
// 0x00000065 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Setup>d__55::MoveNext()
extern void U3CSetupU3Ed__55_MoveNext_mA54C91477206FAF1F0BDB26AAD8DA45E571BB5F2 (void);
// 0x00000066 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Setup>d__55::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSetupU3Ed__55_SetStateMachine_m68B2768D0473B2607DEF97D5327722FBB306AE5E (void);
// 0x00000067 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<CreateLocalPeg>d__58::.ctor()
extern void U3CCreateLocalPegU3Ed__58__ctor_mB8CEC5AD85B2CC8E48D83A4288A2975172B6F491 (void);
// 0x00000068 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<CreateLocalPeg>d__58::MoveNext()
extern void U3CCreateLocalPegU3Ed__58_MoveNext_m8D40DF59701E23BC4E77587778A431F109EA1DD8 (void);
// 0x00000069 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<CreateLocalPeg>d__58::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateLocalPegU3Ed__58_SetStateMachine_m2FDF2DA396625A99230D4C67F24073279C33E25A (void);
// 0x0000006A System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Create>d__60::.ctor()
extern void U3CCreateU3Ed__60__ctor_mBB30CEF6240390C081EBB274E2F7821D95974AED (void);
// 0x0000006B System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Create>d__60::MoveNext()
extern void U3CCreateU3Ed__60_MoveNext_mDB37FAFE991D4B6B45290CF138B7E244AB04C7FF (void);
// 0x0000006C System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Create>d__60::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CCreateU3Ed__60_SetStateMachine_mFAD560495719D3015894DB808091736DF5F90B4A (void);
// 0x0000006D System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Read>d__61::.ctor()
extern void U3CReadU3Ed__61__ctor_m0BD6B586EB5FC66AB69234B9D79234E2EC8C488F (void);
// 0x0000006E System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Read>d__61::MoveNext()
extern void U3CReadU3Ed__61_MoveNext_mF80A54969C4594483DFA6C7D723C5C72BD7F3585 (void);
// 0x0000006F System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Read>d__61::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadU3Ed__61_SetStateMachine_mF70DE6B60FACB2F5D4743FFD9D3FC37C703F6CF2 (void);
// 0x00000070 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Read>d__62::.ctor()
extern void U3CReadU3Ed__62__ctor_m34A2BB2B237DBD614052DD6FC78B4AA32E02B148 (void);
// 0x00000071 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Read>d__62::MoveNext()
extern void U3CReadU3Ed__62_MoveNext_m56E6CD8D7EA92B4EEBD04C2E80D5EBDB24A43E87 (void);
// 0x00000072 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Read>d__62::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CReadU3Ed__62_SetStateMachine_m293B21F8218E1CC5DA462ED1301E7442F532B721 (void);
// 0x00000073 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Modify>d__63::.ctor()
extern void U3CModifyU3Ed__63__ctor_m22B199A3CA6EF658C97361A6310E4DE9786EA751 (void);
// 0x00000074 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Modify>d__63::MoveNext()
extern void U3CModifyU3Ed__63_MoveNext_mD50251CFC70FC654FAFD30DE22E60D78074E043D (void);
// 0x00000075 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Modify>d__63::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CModifyU3Ed__63_SetStateMachine_m4018CBC7C18EB25455AFE711E15029C530D240A8 (void);
// 0x00000076 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Delete>d__64::.ctor()
extern void U3CDeleteU3Ed__64__ctor_m386A59C98A4F5375051938D40B8E5758B7EB439C (void);
// 0x00000077 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Delete>d__64::MoveNext()
extern void U3CDeleteU3Ed__64_MoveNext_m29BF81BDDFBB38C2D14D1CA2606753125CED7627 (void);
// 0x00000078 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Delete>d__64::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDeleteU3Ed__64_SetStateMachine_m5684DDE60F3D8A93E074C93683ED416E93E94C7F (void);
// 0x00000079 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Find>d__65::.ctor()
extern void U3CFindU3Ed__65__ctor_m944E46FB6C219C75750EAB51D821652CC1586A5F (void);
// 0x0000007A System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Find>d__65::MoveNext()
extern void U3CFindU3Ed__65_MoveNext_m4FBBF2BE55B8ED8D2BB7EE4A36194F186BA2ED6A (void);
// 0x0000007B System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<Find>d__65::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CFindU3Ed__65_SetStateMachine_mCB287A2833A0F6CE416F77681CBBE496A8DD97D0 (void);
// 0x0000007C System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<PurgeArea>d__66::.ctor()
extern void U3CPurgeAreaU3Ed__66__ctor_m00932A40BDB84D74E3B874BD99BA4B1EF8858345 (void);
// 0x0000007D System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<PurgeArea>d__66::MoveNext()
extern void U3CPurgeAreaU3Ed__66_MoveNext_m70ED5F59126B0D398487403DDD78EB782CC18CE7 (void);
// 0x0000007E System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<PurgeArea>d__66::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPurgeAreaU3Ed__66_SetStateMachine_m4EAE0934F91D5DA3DEB0E4708E4597F5E9E58CFB (void);
// 0x0000007F System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass68_0::.ctor()
extern void U3CU3Ec__DisplayClass68_0__ctor_mA5FD733737CB6DAC65DB135663CCFC8D8EC66F7A (void);
// 0x00000080 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass68_0::<DownloadRecord>b__0(Microsoft.Azure.SpatialAnchors.AnchorLocatedEventArgs)
extern void U3CU3Ec__DisplayClass68_0_U3CDownloadRecordU3Eb__0_mB7621E1C82CFC57188ABF9F9D452A7089917B689 (void);
// 0x00000081 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadRecord>d__68::.ctor()
extern void U3CDownloadRecordU3Ed__68__ctor_m50A4E9BEC78047EBEFB7CCCC23B077CF39F4C586 (void);
// 0x00000082 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadRecord>d__68::MoveNext()
extern void U3CDownloadRecordU3Ed__68_MoveNext_m508E571055BC8951708FC3A424557AADB04251D0 (void);
// 0x00000083 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadRecord>d__68::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDownloadRecordU3Ed__68_SetStateMachine_m436EE59DFE8665705AE550A4884FCB9BCCB09AD6 (void);
// 0x00000084 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<SearchArea>d__69::.ctor()
extern void U3CSearchAreaU3Ed__69__ctor_m220BCA06A6430185A8191CED3F2297CC68F9F0B1 (void);
// 0x00000085 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<SearchArea>d__69::MoveNext()
extern void U3CSearchAreaU3Ed__69_MoveNext_m931216511CA861A7041FF03072478235ECB8A00B (void);
// 0x00000086 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<SearchArea>d__69::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSearchAreaU3Ed__69_SetStateMachine_m6101AEED6300DE40F3F6B0DD254475F84DE199AD (void);
// 0x00000087 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadList>d__70::.ctor()
extern void U3CDownloadListU3Ed__70__ctor_m199AB6DEC3AD3DBD56A8DDBE6042594AAABEF30F (void);
// 0x00000088 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadList>d__70::MoveNext()
extern void U3CDownloadListU3Ed__70_MoveNext_m31581B1AC2CD95F67CBC36C02D39908C9D154919 (void);
// 0x00000089 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadList>d__70::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDownloadListU3Ed__70_SetStateMachine_m891ADED2C72710D5D4367C78AD49AE3CA89108F6 (void);
// 0x0000008A System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<SearchForRecords>d__71::.ctor()
extern void U3CSearchForRecordsU3Ed__71__ctor_mEB97491A482832B1F708812896E7730B6E3350C2 (void);
// 0x0000008B System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<SearchForRecords>d__71::MoveNext()
extern void U3CSearchForRecordsU3Ed__71_MoveNext_mB8F424FEBFB9B762D1B8322ABC6DD2169FE36652 (void);
// 0x0000008C System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<SearchForRecords>d__71::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSearchForRecordsU3Ed__71_SetStateMachine_mEAED85FC0D5608BC61599ECC4863CA1C63ADAC56 (void);
// 0x0000008D System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadRecordList>d__72::.ctor()
extern void U3CDownloadRecordListU3Ed__72__ctor_mDB71C56AC10E71E96DCAFF85641ABE4A7B451BC8 (void);
// 0x0000008E System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadRecordList>d__72::MoveNext()
extern void U3CDownloadRecordListU3Ed__72_MoveNext_mBE7CE319CAF5C3F28E57DE3E18FFCB2F2D5EC43C (void);
// 0x0000008F System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DownloadRecordList>d__72::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDownloadRecordListU3Ed__72_SetStateMachine_m83D3A0D614AA13BBB16E44E9EAA7CBFAC9F73A32 (void);
// 0x00000090 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DeleteById>d__73::.ctor()
extern void U3CDeleteByIdU3Ed__73__ctor_m28EBBDA542354FF66734BFFEFA742A8EDB377088 (void);
// 0x00000091 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DeleteById>d__73::MoveNext()
extern void U3CDeleteByIdU3Ed__73_MoveNext_mD7DFB4B78E19F4C9613922F6C47C8439BB75DBCD (void);
// 0x00000092 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<DeleteById>d__73::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDeleteByIdU3Ed__73_SetStateMachine_mEBD71C630F906112A8F3E971128C9F59FB2740FD (void);
// 0x00000093 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<WaitForARSession>d__78::.ctor()
extern void U3CWaitForARSessionU3Ed__78__ctor_m744A2280157BF5427E0CF6A2DB2F22401EF4BBAA (void);
// 0x00000094 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<WaitForARSession>d__78::MoveNext()
extern void U3CWaitForARSessionU3Ed__78_MoveNext_mDE58E195EFBA2A5660F0821C6E381416CA19CAB6 (void);
// 0x00000095 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<WaitForARSession>d__78::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CWaitForARSessionU3Ed__78_SetStateMachine_mE574DB7A41CF5BCD98FB59BA63FBB1ED30B39D97 (void);
// 0x00000096 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<InternalCreateLocalPeg>d__79::.ctor()
extern void U3CInternalCreateLocalPegU3Ed__79__ctor_mA0726457C1E15635A49A8176D0E3A2BBBC866B39 (void);
// 0x00000097 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<InternalCreateLocalPeg>d__79::MoveNext()
extern void U3CInternalCreateLocalPegU3Ed__79_MoveNext_mD9DE716715596BC0A280FCF8570901879F424F79 (void);
// 0x00000098 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<InternalCreateLocalPeg>d__79::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CInternalCreateLocalPegU3Ed__79_SetStateMachine_mA25D940036014ECE9DCACE810F570A9AF0C64DFE (void);
// 0x00000099 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass80_0::.ctor()
extern void U3CU3Ec__DisplayClass80_0__ctor_mC51D0C2C638276F384579FFBA6B663876B4B8F82 (void);
// 0x0000009A System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass80_0::<AddRecord>b__0(Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord)
extern void U3CU3Ec__DisplayClass80_0_U3CAddRecordU3Eb__0_m8A7A3D7A68F3A52DE2E633FB4E214212C945F2AF (void);
// 0x0000009B System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<AddRecord>d__80::.ctor()
extern void U3CAddRecordU3Ed__80__ctor_mCB63C21CF7B53E70A23B58E81A64803796AAB27D (void);
// 0x0000009C System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<AddRecord>d__80::MoveNext()
extern void U3CAddRecordU3Ed__80_MoveNext_mBC3574A0D41D676CCD2EE09B37ED591D73AF89A7 (void);
// 0x0000009D System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<AddRecord>d__80::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CAddRecordU3Ed__80_SetStateMachine_m0BDA9E98A08B2CAD7517FFE874196BCA983324D4 (void);
// 0x0000009E System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass81_0::.ctor()
extern void U3CU3Ec__DisplayClass81_0__ctor_mAFDF7826AD4CEAC8582DCED83DA01D54B2E43D49 (void);
// 0x0000009F System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass81_0::<GetRecord>b__0(Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord)
extern void U3CU3Ec__DisplayClass81_0_U3CGetRecordU3Eb__0_m87A00FFF078A9AC019291BDDB1D06A0786469743 (void);
// 0x000000A0 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass82_0::.ctor()
extern void U3CU3Ec__DisplayClass82_0__ctor_mF2D361277CA1F3D286FE94AE0316C6D2C540EECF (void);
// 0x000000A1 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass82_0::<DeleteRecord>b__0(Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/AnchorRecord)
extern void U3CU3Ec__DisplayClass82_0_U3CDeleteRecordU3Eb__0_mB67260B7D6DA7D411D01B501150C5A18EEDCD49D (void);
// 0x000000A2 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<RecordFromCloud>d__83::.ctor()
extern void U3CRecordFromCloudU3Ed__83__ctor_m0191D092C28B3C9940B15D3EC901821862F9C103 (void);
// 0x000000A3 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<RecordFromCloud>d__83::MoveNext()
extern void U3CRecordFromCloudU3Ed__83_MoveNext_m2562FA74FBE9C343203A55645DC0DED43F55576D (void);
// 0x000000A4 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<RecordFromCloud>d__83::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CRecordFromCloudU3Ed__83_SetStateMachine_mC3B88C981148707EC12F5ADEC0E1FE643F50D868 (void);
// 0x000000A5 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass86_0::.ctor()
extern void U3CU3Ec__DisplayClass86_0__ctor_mB5CFDC6FCA64B34523EC7A55769CE2C009AF954F (void);
// 0x000000A6 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass86_0::<OnASALog>b__0()
extern void U3CU3Ec__DisplayClass86_0_U3COnASALogU3Eb__0_mEF4B9A8074B10FDFBE8E795090027D92B4AD218C (void);
// 0x000000A7 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass87_0::.ctor()
extern void U3CU3Ec__DisplayClass87_0__ctor_mF97E389A9E3AAA06255EAB240BB5D08A0F9F572B (void);
// 0x000000A8 System.Void Microsoft.MixedReality.WorldLocking.ASA.PublisherASA/<>c__DisplayClass87_0::<OnASAError>b__0()
extern void U3CU3Ec__DisplayClass87_0_U3COnASAErrorU3Eb__0_mD84EA2A48EE9371056FA4C0F7BC8BF4335866DAA (void);
// 0x000000A9 Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::get_LocalPeg()
extern void SpacePinASA_get_LocalPeg_m0F728B5C04E0845597B8B11E168156F1B20EFDEA (void);
// 0x000000AA Microsoft.MixedReality.WorldLocking.ASA.IPublisher Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::get_Publisher()
extern void SpacePinASA_get_Publisher_m46A0FFBF75D1D244FC3DB6D878D75E08DA1C4500 (void);
// 0x000000AB System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::set_Publisher(Microsoft.MixedReality.WorldLocking.ASA.IPublisher)
extern void SpacePinASA_set_Publisher_m3A91090D95536B6A677B6AEE0AB5E10D264740FC (void);
// 0x000000AC System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::get_SpacePinId()
extern void SpacePinASA_get_SpacePinId_m8C3A45F246C36A73C253844A3549DDFA2B1EC87F (void);
// 0x000000AD System.Collections.Generic.Dictionary`2<System.String,System.String> Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::get_Properties()
extern void SpacePinASA_get_Properties_m27F408B0FD3D145724C1F8C1D95E069080B39963 (void);
// 0x000000AE System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::Awake()
extern void SpacePinASA_Awake_m2C88E4D40633E6E6CDE046EC44444950BBD89710 (void);
// 0x000000AF System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::get_IsReadyForPublish()
extern void SpacePinASA_get_IsReadyForPublish_mBD95537BA9DE2D396B56B01CDA1D06B04D431D90 (void);
// 0x000000B0 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::SetLocalPeg(Microsoft.MixedReality.WorldLocking.ASA.ILocalPeg)
extern void SpacePinASA_SetLocalPeg_m29C3B631B667836F86B725BB7A7A6127E3F22C7E (void);
// 0x000000B1 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::ConfigureLocalPeg()
extern void SpacePinASA_ConfigureLocalPeg_mD101FCBD64C1F7616E3B4C232EAC721849D806FF (void);
// 0x000000B2 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA::.ctor()
extern void SpacePinASA__ctor_m1927AC56CFF49F1F60FEDC0C793BAD410AEBE42D (void);
// 0x000000B3 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA/KeyValPair::.ctor()
extern void KeyValPair__ctor_m598C5527DFCEB0E34043DE871CD34498A711542B (void);
// 0x000000B4 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA/<ConfigureLocalPeg>d__20::.ctor()
extern void U3CConfigureLocalPegU3Ed__20__ctor_mB0E218A94C164C1A69237CE24AAF41769F38326B (void);
// 0x000000B5 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA/<ConfigureLocalPeg>d__20::MoveNext()
extern void U3CConfigureLocalPegU3Ed__20_MoveNext_m0E4558FB4E82DEFEAF16523AB5907FBE6E677289 (void);
// 0x000000B6 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA/<ConfigureLocalPeg>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CConfigureLocalPegU3Ed__20_SetStateMachine_m1DEDABCE0B469F588B211D7A2407E1B129C037F6 (void);
// 0x000000B7 System.Collections.Generic.IReadOnlyCollection`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::get_SpacePins()
extern void SpacePinBinder_get_SpacePins_m1AF5AF6E659865F935C60824CB2ED014A73ED15D (void);
// 0x000000B8 System.Single Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::get_SearchRadius()
extern void SpacePinBinder_get_SearchRadius_mA3BAA0C01AB0C41D1CF79348E8B10126BCDED63C (void);
// 0x000000B9 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::set_SearchRadius(System.Single)
extern void SpacePinBinder_set_SearchRadius_m68E34D6F6AFEA7F83F8DA6F306A0E25FAF488B56 (void);
// 0x000000BA System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::get_Name()
extern void SpacePinBinder_get_Name_m731AFA512852D00DDBA8B76DCD21EAC43B13B338 (void);
// 0x000000BB System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::get_IsReady()
extern void SpacePinBinder_get_IsReady_m401CA2750DD153A9485AD34C331B4E51B1DB8097 (void);
// 0x000000BC Microsoft.MixedReality.WorldLocking.ASA.ReadinessStatus Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::get_PublisherStatus()
extern void SpacePinBinder_get_PublisherStatus_m45E91C43D966DA51E8B46E7E807C942D4BCA5BA6 (void);
// 0x000000BD System.Collections.Generic.IReadOnlyList`1<Microsoft.MixedReality.WorldLocking.ASA.SpacePinCloudBinding> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::GetBindings()
extern void SpacePinBinder_GetBindings_mCFF9B1714BBEA60F71A30218EB5E17B657C0C1C8 (void);
// 0x000000BE System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::CreateBinding(System.String,System.String)
extern void SpacePinBinder_CreateBinding_m8250050CC2754BCB1FBFFA78A6629F1034180125 (void);
// 0x000000BF System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::RemoveBinding(System.String)
extern void SpacePinBinder_RemoveBinding_m17FC250E32BBD5BF5D71E25FFC402413278F6A56 (void);
// 0x000000C0 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::AddSpacePin(Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA)
extern void SpacePinBinder_AddSpacePin_m5E4BD29D3303E232B20EC443B46D5CCEE061D72B (void);
// 0x000000C1 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::RemoveSpacePin(System.String)
extern void SpacePinBinder_RemoveSpacePin_mF33B98F8DDF9AB9A2DEF2691B4D3FCE7B5700801 (void);
// 0x000000C2 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::Publish()
extern void SpacePinBinder_Publish_m87722513654FA6EA9C5BD2408DDF70A833317827 (void);
// 0x000000C3 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::Publish(Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA)
extern void SpacePinBinder_Publish_mACDF39FF42951483AE9A5034EEBFCADF018D1A00 (void);
// 0x000000C4 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::Download()
extern void SpacePinBinder_Download_m92CBF37CD52B3B3799A24DDD522BCADA555A1F5C (void);
// 0x000000C5 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::Search()
extern void SpacePinBinder_Search_m47C8350A31EC6C918D977BD2CA3717909C38F8E0 (void);
// 0x000000C6 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::Purge()
extern void SpacePinBinder_Purge_m6ADF4BD850B156D5FB499A6FFB56DE5183342788 (void);
// 0x000000C7 System.Threading.Tasks.Task`1<System.Boolean> Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::Clear()
extern void SpacePinBinder_Clear_m8E0FCB3336695953465F54039088933AD7E90DA7 (void);
// 0x000000C8 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::UnPin()
extern void SpacePinBinder_UnPin_mAD08C0D32E4C5692A93EBCE67EDFDAD6421E7E7D (void);
// 0x000000C9 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::Awake()
extern void SpacePinBinder_Awake_m43699AD46FA72C7D345B2C9EC0F72521439DBDA4 (void);
// 0x000000CA System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::DebugLogExtra(System.String)
extern void SpacePinBinder_DebugLogExtra_mC6DECC945BBF972279FEADF7CAF6612766DD81A8 (void);
// 0x000000CB System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::SetSpacePinsPublisher(Microsoft.MixedReality.WorldLocking.ASA.PublisherASA)
extern void SpacePinBinder_SetSpacePinsPublisher_m8E282AE2099B8F4A3B0D2A8A53C14C990E259A60 (void);
// 0x000000CC System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::IsReadyForPublish(Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA)
extern void SpacePinBinder_IsReadyForPublish_m1AAF16D1BA6A86BB130FE16D578440C16BCCB4E9 (void);
// 0x000000CD System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::SetBinding(System.String,System.String)
extern void SpacePinBinder_SetBinding_mF8CC9316A64A81C9E9DD0AF4390DB44990A81187 (void);
// 0x000000CE Microsoft.MixedReality.WorldLocking.ASA.LocalPegAndProperties Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::ExtractForPublisher(Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA)
extern void SpacePinBinder_ExtractForPublisher_m036AD1EFF8BC876BB4322458C9667AD402D38300 (void);
// 0x000000CF System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::FindSpacePinById(System.String)
extern void SpacePinBinder_FindSpacePinById_mDC4B1D3614DD03232014AE1A0FAC1664E7AC84B1 (void);
// 0x000000D0 System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::FindSpacePin(Microsoft.MixedReality.WorldLocking.Core.SpacePin)
extern void SpacePinBinder_FindSpacePin_m3E56179221D32BF0BC028EFA05CDE1C3D8E5DD65 (void);
// 0x000000D1 System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::FindBindingByCloudAnchorId(System.String)
extern void SpacePinBinder_FindBindingByCloudAnchorId_m58EA8C2F994781F1F33DDC2D3C28E9332E9897FC (void);
// 0x000000D2 System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::FindBindingBySpacePinId(System.String)
extern void SpacePinBinder_FindBindingBySpacePinId_m21A18166D6961D56DEFA6A55BAA52134FF8D7793 (void);
// 0x000000D3 System.Int32 Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::FindByPredicate(System.Collections.Generic.List`1<T>,System.Predicate`1<T>)
// 0x000000D4 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::.ctor()
extern void SpacePinBinder__ctor_m8F40E9A1C6ABD68DF345C38E2113AC4AB2605119 (void);
// 0x000000D5 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder::.cctor()
extern void SpacePinBinder__cctor_mD34D8A7510B0AAA35A31C84A6F0A80F4EE520B39 (void);
// 0x000000D6 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/SpacePinPegAndProps::.ctor()
extern void SpacePinPegAndProps__ctor_mB91CEE5DB746589B4C83F7A91421A39B4E8CBD26 (void);
// 0x000000D7 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Publish>d__24::.ctor()
extern void U3CPublishU3Ed__24__ctor_mE06E96839326DB258449B725033075E9A6962581 (void);
// 0x000000D8 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Publish>d__24::MoveNext()
extern void U3CPublishU3Ed__24_MoveNext_m8CB46268093867E8577858AF69CE70C234C7DD08 (void);
// 0x000000D9 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Publish>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPublishU3Ed__24_SetStateMachine_m865160DD563906A0B8701093CE27779950A5EFA6 (void);
// 0x000000DA System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Publish>d__25::.ctor()
extern void U3CPublishU3Ed__25__ctor_m0C2D46D2A47A98F0D5112B332D0F0D609CF6CB0F (void);
// 0x000000DB System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Publish>d__25::MoveNext()
extern void U3CPublishU3Ed__25_MoveNext_m31EEC158C92C9DA58C340F2C4787E6735593AD7A (void);
// 0x000000DC System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Publish>d__25::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPublishU3Ed__25_SetStateMachine_mDD80447B3563E954ECE3BD0B651EF68A2FAFDA2C (void);
// 0x000000DD System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Download>d__26::.ctor()
extern void U3CDownloadU3Ed__26__ctor_m37464F764F2C2E4D685BDCAF1807544C51CA9F68 (void);
// 0x000000DE System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Download>d__26::MoveNext()
extern void U3CDownloadU3Ed__26_MoveNext_m4D79C741AF704443A790CE6AA58FBB5C1EFDE8ED (void);
// 0x000000DF System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Download>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CDownloadU3Ed__26_SetStateMachine_mB9FD2CF4C909E8CE4078DB04952E1EAA4F1F7315 (void);
// 0x000000E0 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Search>d__27::.ctor()
extern void U3CSearchU3Ed__27__ctor_mBACDEA2B7F51EB05807B4C9576F2952BA08293D3 (void);
// 0x000000E1 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Search>d__27::MoveNext()
extern void U3CSearchU3Ed__27_MoveNext_mCC7DF67EBAA8534C8BE11CE4D1B964ED0CCCEECA (void);
// 0x000000E2 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Search>d__27::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CSearchU3Ed__27_SetStateMachine_m1D361F16149F7EA4C1DA7FF7EF2AFA3AFE3C942B (void);
// 0x000000E3 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Purge>d__28::.ctor()
extern void U3CPurgeU3Ed__28__ctor_m054EBED0287A2203AF73381D81C9246C598C6DB4 (void);
// 0x000000E4 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Purge>d__28::MoveNext()
extern void U3CPurgeU3Ed__28_MoveNext_mF8BD0DCDC2DC172BA2B8BF1E59AAB0C1E2981136 (void);
// 0x000000E5 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Purge>d__28::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CPurgeU3Ed__28_SetStateMachine_mDC3D399BE941985F04FEAA414BC4AA951ED7C3E9 (void);
// 0x000000E6 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Clear>d__29::.ctor()
extern void U3CClearU3Ed__29__ctor_m0C9BE60F2268B1130F61D42FA7B36487791B0A4B (void);
// 0x000000E7 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Clear>d__29::MoveNext()
extern void U3CClearU3Ed__29_MoveNext_m288D441AFBF53D89E0C41D19F16141BC2CAB26D8 (void);
// 0x000000E8 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<Clear>d__29::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
extern void U3CClearU3Ed__29_SetStateMachine_m4AA0583CDF48A6F2159B45B1086D5328875B06DE (void);
// 0x000000E9 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass37_0::.ctor()
extern void U3CU3Ec__DisplayClass37_0__ctor_mBE2C9D398A22D997EF6CB39DDBDAB0E25ACDDCBA (void);
// 0x000000EA System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass37_0::<FindSpacePinById>b__0(Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA)
extern void U3CU3Ec__DisplayClass37_0_U3CFindSpacePinByIdU3Eb__0_m4245DA0E0152B393408556F362A84EB6B1C37787 (void);
// 0x000000EB System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass38_0::.ctor()
extern void U3CU3Ec__DisplayClass38_0__ctor_mAE1A5EC6A8AEA4B2362AFF24D9E1EE2B9A4DA951 (void);
// 0x000000EC System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass38_0::<FindSpacePin>b__0(Microsoft.MixedReality.WorldLocking.ASA.SpacePinASA)
extern void U3CU3Ec__DisplayClass38_0_U3CFindSpacePinU3Eb__0_mA8164AC5E6205CD88B8D9549A4CC338977CD1EA2 (void);
// 0x000000ED System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass39_0::.ctor()
extern void U3CU3Ec__DisplayClass39_0__ctor_mD4835B8261BA9899D27CDD2FB352DF63FC34CFF1 (void);
// 0x000000EE System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass39_0::<FindBindingByCloudAnchorId>b__0(Microsoft.MixedReality.WorldLocking.ASA.SpacePinCloudBinding)
extern void U3CU3Ec__DisplayClass39_0_U3CFindBindingByCloudAnchorIdU3Eb__0_m5A4B925C1B18DB42A3CD6CCE4B540AD792E47BB8 (void);
// 0x000000EF System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass40_0::.ctor()
extern void U3CU3Ec__DisplayClass40_0__ctor_mE3AA5E165E154781680AF608DF4D4C782A807772 (void);
// 0x000000F0 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass40_0::<FindBindingBySpacePinId>b__0(Microsoft.MixedReality.WorldLocking.ASA.SpacePinCloudBinding)
extern void U3CU3Ec__DisplayClass40_0_U3CFindBindingBySpacePinIdU3Eb__0_mA26A9BCB2C39213CB34EBB64AC8C7122DD567EBE (void);
// 0x000000F1 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass41_0`1::.ctor()
// 0x000000F2 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinder/<>c__DisplayClass41_0`1::<FindByPredicate>b__0(T)
// 0x000000F3 System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinderFile::get_Name()
extern void SpacePinBinderFile_get_Name_mC7BCEE089D944610C8182BC820FCB289C7D33236 (void);
// 0x000000F4 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinderFile::Get(Microsoft.MixedReality.WorldLocking.ASA.IBinder)
extern void SpacePinBinderFile_Get_m6A674F0CBB3A15191531F678D3B2EC8D493C0981 (void);
// 0x000000F5 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinderFile::Put(Microsoft.MixedReality.WorldLocking.ASA.IBinder)
extern void SpacePinBinderFile_Put_m39427463ACA4E1F9C3EF959873C846F509BD96F1 (void);
// 0x000000F6 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinderFile::Save(Microsoft.MixedReality.WorldLocking.ASA.IBinder)
extern void SpacePinBinderFile_Save_mB344A6C1B84321A588DD6617682A543551185927 (void);
// 0x000000F7 System.Boolean Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinderFile::Load(Microsoft.MixedReality.WorldLocking.ASA.IBinder)
extern void SpacePinBinderFile_Load_m30632FDEAF1AE5E68766F8C51BA927DCC50C0147 (void);
// 0x000000F8 System.String Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinderFile::GetFullPath()
extern void SpacePinBinderFile_GetFullPath_m289C1470AD607BFFAF410FB175BBB7611C86E085 (void);
// 0x000000F9 System.Void Microsoft.MixedReality.WorldLocking.ASA.SpacePinBinderFile::.ctor()
extern void SpacePinBinderFile__ctor_mB119DF53FF3F461D160641E01E042B7837D6EC7D (void);
static Il2CppMethodPointer s_methodPointers[249] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LocalPegAndProperties__ctor_m2E1B8DF009D1FCACD11698293FABC3DCD091A78A,
	ReadinessStatus__ctor_mDC13B0D839BDA5BB3133E13C0C1079D569392647,
	ReadinessStatus__ctor_mD88875F7E3781594E7B69C339E0348A040451750,
	ReadinessStatus__ctor_m8158198B5451528424382D356FD0ACFB9FB046FC,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	PublisherASA_get_CoarseRelocationEnabled_m3B71B15FE3B822CE66C0ED49180138261ABA5426,
	PublisherASA_set_CoarseRelocationEnabled_m1A02EDBB45E0F16C9D07527A4DBC36DEBEC24EFC,
	PublisherASA_get_CoarseRelocPublishEnabled_m6DC5401389D09EF00B1FFDCC14126626FF682131,
	PublisherASA_set_CoarseRelocPublishEnabled_mC5094449A815552DE959371E91971043525CB5BE,
	PublisherASA_get_CoarseRelocUseWifi_mFAA7C189FCAB1D9E1401AEA934B3785C62A8414E,
	PublisherASA_set_CoarseRelocUseWifi_m5DE62286A7BF973FC54FDADDFB4AAB3798E84496,
	PublisherASA_get_CoarseRelocUseGPS_m096F16EEF3274F51C779A1B21B265D1C279D1925,
	PublisherASA_set_CoarseRelocUseGPS_mCC5A62799458FF8403E6A41F779A0D5CDFA64BA0,
	PublisherASA_get_BeaconUuids_mC9CE2B4D16C4E1E85B1B41DC35830D5F6F13240B,
	PublisherASA_get_CoarseRelocUseBluetooth_mB0DB3EEA5735F7B1D9CB3C8BAF809B4FEED22CDA,
	PublisherASA_get_AnchorsParent_mC31ABC6BCF8AE4E9E32235CB1192BE5C23BF3023,
	PublisherASA_set_AnchorsParent_mA58FF8FF8C6CEEFD3E1C9D194D6BEDCAE182639F,
	PublisherASA_get_AnchorsPrefab_mD9BB056B69E5A56B0545672508D204FB05DD6CD3,
	PublisherASA_set_AnchorsPrefab_m99C72E14618EC426839F6E3C27516D559203E688,
	PublisherASA_get_MaxSearchSeconds_m1F9FE8BD48DE157994CB262E9990FE6603749D42,
	PublisherASA_set_MaxSearchSeconds_m72ABE9A7FC70B55149230775C6F835EB34715B69,
	PublisherASA_get_MaxWaitForMoreAnchorsSeconds_mE3412687950F1746318376055A6FD93770BAA844,
	PublisherASA_set_MaxWaitForMoreAnchorsSeconds_m78A77FE37112A87CE9C725F85F014F9C338F5737,
	PublisherASA_get_MinRecommendedForCreateProgress_m68661CBAE4A11E29FC496667398BAC167CF621E2,
	PublisherASA_set_MinRecommendedForCreateProgress_m0DEC2731B455804436C942B7AA1EFE5114F22C19,
	PublisherASA_get_IsBusy_m45D5724C3572E5D702DDA70F616196A5DA188574,
	PublisherASA_Setup_m4C1F736C8C6A85CD3ECC5D0C62E45BD8675C2210,
	PublisherASA_get_Status_m25AAD3B3041EFBF1716B156E6197BD685AAE5C66,
	PublisherASA_CreateLocalPeg_m2EBDC847F836DD007C06E6D6D8CD49098BDF6E32,
	PublisherASA_ReleaseLocalPeg_mF3F9DAF50C9E0362FFD7723F86CA82BEDCCE1D3A,
	PublisherASA_Create_m34677EA84D8DB7A0C96DB179834AAE16F436CAD8,
	PublisherASA_Read_m898249D2C6843126A75101862A5665FC3EBFBF99,
	PublisherASA_Read_m263C84C5839909F8725DCB71D0E994C0AE570A4B,
	PublisherASA_Modify_mA2D60A8975B5894B988E96A7E5B97552D933B08D,
	PublisherASA_Delete_m690A4681549610C12F1528BEC7C41EB0904A71BE,
	PublisherASA_Find_m5024A48D23C7403DE9FEB13F30437E929093C388,
	PublisherASA_PurgeArea_m72F8BB029525A0B431AE9B630F35E2C08F0B129E,
	PublisherASA_LogASASetup_m31AD95784AA7074E21F3022EEA87274F5840490E,
	PublisherASA_DownloadRecord_m2931733120971D496913E159E6A991652510BCFD,
	PublisherASA_SearchArea_mCDBE52034EFB7C86B85CA1650D59D51A2AF1D0A3,
	PublisherASA_DownloadList_m4B8DAB2B9D9CCC17251BB71314EE923CD9FE8988,
	PublisherASA_SearchForRecords_m16E730FED9D9EAF9FBCFAE8EC3631F7E934826AF,
	PublisherASA_DownloadRecordList_m3F0B74A7A22083F4C03940795EE417857AC540D8,
	PublisherASA_DeleteById_m26833A01833198D0FB5677BA00C8BF2463D21F61,
	PublisherASA_ExtractIdsForCriteria_mAD9B4A8216F3D16355FC52DFAD7063F7DEDD8791,
	PublisherASA_WrapReadiness_mD9EA06B748D3234D98CBD469080F44FEC5D6C289,
	PublisherASA_CheckReadiness_mD65E218567C858A1F8D610829404F233F1C2F3FF,
	PublisherASA_IsReadyForCreate_mB7BE61CFABFDB74149FFD3EAFDB08256C923BBF6,
	PublisherASA_WaitForARSession_mF39C9FD013155930BF3F5BBE75E3DD02F66769F5,
	PublisherASA_InternalCreateLocalPeg_m21C4B5B7F16D0C207074D4180336EBED70A75053,
	PublisherASA_AddRecord_m008266669DD1CFB30BAD9F53B54358EF8C0EE3CE,
	PublisherASA_GetRecord_mF1A6635855723DD8EA08CA0E77683A3AAB1CA0F9,
	PublisherASA_DeleteRecord_m43A18CCAD5D39BE30625A4706AB20B7720D14DAD,
	PublisherASA_RecordFromCloud_m7BF423B98C6D5AA546A50D530706006A232BEB4A,
	PublisherASA_OnAnchorLocated_mCFB15C15F73593084E6006696188A4F70C1AECFD,
	PublisherASA_OnAnchorLocateCompleted_mFA8833DB1887AD9AA51B1CBBC48E540BCCEC3679,
	PublisherASA_OnASALog_mB69BD1607AE90CE275D402CCAF130E7DD0DDFE96,
	PublisherASA_OnASAError_mFCC74824C18E17DA164616A1A767EFC4A8ADA363,
	PublisherASA_CreateLocationProvider_m889272A228327DDF3EE16DDF608E7905A93C05CC,
	PublisherASA_LocationReady_mCA89CB46E53AACD6D7729E4A9912340607EF31C6,
	PublisherASA_AcquireBusy_m7C63BFEDBB8941392E8D9F3485CFE4539EE1232A,
	PublisherASA_ReleaseBusy_m439E9BA9A93CC3D5FCBDFD7E29F2CB786255EDDA,
	PublisherASA__ctor_m8F8DC447D8283DEB737A3BFA6DFDFA9C3090180F,
	PublisherASA__cctor_mC6F3A0B0AB6A8800E6B7939AD7309D82E6C7E5B0,
	AnchorRecord_GetPegWithProperties_mCD339A78F905B5E85EC074E62229A2722779C4D5,
	AnchorRecord_DebugLog_mD7BEDD1436B0F0B66B22A9C73FC4F748694853F8,
	AnchorRecord__ctor_m6F376E82FEE6D1691017F830BC988B26CBD9F7A6,
	LocalPeg_get_NativeAnchor_m1DDF042D2952504C50C7286156BCD040D20495BF,
	LocalPeg_get_Name_m07867D809B055ABE8D01948E3E5E4A609999487D,
	LocalPeg_set_Name_m706025715A3A6E92DB8EFE3209E6E0A03EF987A1,
	LocalPeg_get_IsReadyForPublish_m3BA1D6D14E29D066DC3343632C57F5278D89B9EA,
	LocalPeg_get_GlobalPose_mE67A9E17062810F938B110A68C8C5C8A60B866F2,
	LocalPeg__ctor_m0B2B52B6047DBF51E7E6D4C2E3D1B2DE59433A67,
	U3CSetupU3Ed__55__ctor_m4A42761E5A71F4406D5EC65953CF1574B3B310EB,
	U3CSetupU3Ed__55_MoveNext_mA54C91477206FAF1F0BDB26AAD8DA45E571BB5F2,
	U3CSetupU3Ed__55_SetStateMachine_m68B2768D0473B2607DEF97D5327722FBB306AE5E,
	U3CCreateLocalPegU3Ed__58__ctor_mB8CEC5AD85B2CC8E48D83A4288A2975172B6F491,
	U3CCreateLocalPegU3Ed__58_MoveNext_m8D40DF59701E23BC4E77587778A431F109EA1DD8,
	U3CCreateLocalPegU3Ed__58_SetStateMachine_m2FDF2DA396625A99230D4C67F24073279C33E25A,
	U3CCreateU3Ed__60__ctor_mBB30CEF6240390C081EBB274E2F7821D95974AED,
	U3CCreateU3Ed__60_MoveNext_mDB37FAFE991D4B6B45290CF138B7E244AB04C7FF,
	U3CCreateU3Ed__60_SetStateMachine_mFAD560495719D3015894DB808091736DF5F90B4A,
	U3CReadU3Ed__61__ctor_m0BD6B586EB5FC66AB69234B9D79234E2EC8C488F,
	U3CReadU3Ed__61_MoveNext_mF80A54969C4594483DFA6C7D723C5C72BD7F3585,
	U3CReadU3Ed__61_SetStateMachine_mF70DE6B60FACB2F5D4743FFD9D3FC37C703F6CF2,
	U3CReadU3Ed__62__ctor_m34A2BB2B237DBD614052DD6FC78B4AA32E02B148,
	U3CReadU3Ed__62_MoveNext_m56E6CD8D7EA92B4EEBD04C2E80D5EBDB24A43E87,
	U3CReadU3Ed__62_SetStateMachine_m293B21F8218E1CC5DA462ED1301E7442F532B721,
	U3CModifyU3Ed__63__ctor_m22B199A3CA6EF658C97361A6310E4DE9786EA751,
	U3CModifyU3Ed__63_MoveNext_mD50251CFC70FC654FAFD30DE22E60D78074E043D,
	U3CModifyU3Ed__63_SetStateMachine_m4018CBC7C18EB25455AFE711E15029C530D240A8,
	U3CDeleteU3Ed__64__ctor_m386A59C98A4F5375051938D40B8E5758B7EB439C,
	U3CDeleteU3Ed__64_MoveNext_m29BF81BDDFBB38C2D14D1CA2606753125CED7627,
	U3CDeleteU3Ed__64_SetStateMachine_m5684DDE60F3D8A93E074C93683ED416E93E94C7F,
	U3CFindU3Ed__65__ctor_m944E46FB6C219C75750EAB51D821652CC1586A5F,
	U3CFindU3Ed__65_MoveNext_m4FBBF2BE55B8ED8D2BB7EE4A36194F186BA2ED6A,
	U3CFindU3Ed__65_SetStateMachine_mCB287A2833A0F6CE416F77681CBBE496A8DD97D0,
	U3CPurgeAreaU3Ed__66__ctor_m00932A40BDB84D74E3B874BD99BA4B1EF8858345,
	U3CPurgeAreaU3Ed__66_MoveNext_m70ED5F59126B0D398487403DDD78EB782CC18CE7,
	U3CPurgeAreaU3Ed__66_SetStateMachine_m4EAE0934F91D5DA3DEB0E4708E4597F5E9E58CFB,
	U3CU3Ec__DisplayClass68_0__ctor_mA5FD733737CB6DAC65DB135663CCFC8D8EC66F7A,
	U3CU3Ec__DisplayClass68_0_U3CDownloadRecordU3Eb__0_mB7621E1C82CFC57188ABF9F9D452A7089917B689,
	U3CDownloadRecordU3Ed__68__ctor_m50A4E9BEC78047EBEFB7CCCC23B077CF39F4C586,
	U3CDownloadRecordU3Ed__68_MoveNext_m508E571055BC8951708FC3A424557AADB04251D0,
	U3CDownloadRecordU3Ed__68_SetStateMachine_m436EE59DFE8665705AE550A4884FCB9BCCB09AD6,
	U3CSearchAreaU3Ed__69__ctor_m220BCA06A6430185A8191CED3F2297CC68F9F0B1,
	U3CSearchAreaU3Ed__69_MoveNext_m931216511CA861A7041FF03072478235ECB8A00B,
	U3CSearchAreaU3Ed__69_SetStateMachine_m6101AEED6300DE40F3F6B0DD254475F84DE199AD,
	U3CDownloadListU3Ed__70__ctor_m199AB6DEC3AD3DBD56A8DDBE6042594AAABEF30F,
	U3CDownloadListU3Ed__70_MoveNext_m31581B1AC2CD95F67CBC36C02D39908C9D154919,
	U3CDownloadListU3Ed__70_SetStateMachine_m891ADED2C72710D5D4367C78AD49AE3CA89108F6,
	U3CSearchForRecordsU3Ed__71__ctor_mEB97491A482832B1F708812896E7730B6E3350C2,
	U3CSearchForRecordsU3Ed__71_MoveNext_mB8F424FEBFB9B762D1B8322ABC6DD2169FE36652,
	U3CSearchForRecordsU3Ed__71_SetStateMachine_mEAED85FC0D5608BC61599ECC4863CA1C63ADAC56,
	U3CDownloadRecordListU3Ed__72__ctor_mDB71C56AC10E71E96DCAFF85641ABE4A7B451BC8,
	U3CDownloadRecordListU3Ed__72_MoveNext_mBE7CE319CAF5C3F28E57DE3E18FFCB2F2D5EC43C,
	U3CDownloadRecordListU3Ed__72_SetStateMachine_m83D3A0D614AA13BBB16E44E9EAA7CBFAC9F73A32,
	U3CDeleteByIdU3Ed__73__ctor_m28EBBDA542354FF66734BFFEFA742A8EDB377088,
	U3CDeleteByIdU3Ed__73_MoveNext_mD7DFB4B78E19F4C9613922F6C47C8439BB75DBCD,
	U3CDeleteByIdU3Ed__73_SetStateMachine_mEBD71C630F906112A8F3E971128C9F59FB2740FD,
	U3CWaitForARSessionU3Ed__78__ctor_m744A2280157BF5427E0CF6A2DB2F22401EF4BBAA,
	U3CWaitForARSessionU3Ed__78_MoveNext_mDE58E195EFBA2A5660F0821C6E381416CA19CAB6,
	U3CWaitForARSessionU3Ed__78_SetStateMachine_mE574DB7A41CF5BCD98FB59BA63FBB1ED30B39D97,
	U3CInternalCreateLocalPegU3Ed__79__ctor_mA0726457C1E15635A49A8176D0E3A2BBBC866B39,
	U3CInternalCreateLocalPegU3Ed__79_MoveNext_mD9DE716715596BC0A280FCF8570901879F424F79,
	U3CInternalCreateLocalPegU3Ed__79_SetStateMachine_mA25D940036014ECE9DCACE810F570A9AF0C64DFE,
	U3CU3Ec__DisplayClass80_0__ctor_mC51D0C2C638276F384579FFBA6B663876B4B8F82,
	U3CU3Ec__DisplayClass80_0_U3CAddRecordU3Eb__0_m8A7A3D7A68F3A52DE2E633FB4E214212C945F2AF,
	U3CAddRecordU3Ed__80__ctor_mCB63C21CF7B53E70A23B58E81A64803796AAB27D,
	U3CAddRecordU3Ed__80_MoveNext_mBC3574A0D41D676CCD2EE09B37ED591D73AF89A7,
	U3CAddRecordU3Ed__80_SetStateMachine_m0BDA9E98A08B2CAD7517FFE874196BCA983324D4,
	U3CU3Ec__DisplayClass81_0__ctor_mAFDF7826AD4CEAC8582DCED83DA01D54B2E43D49,
	U3CU3Ec__DisplayClass81_0_U3CGetRecordU3Eb__0_m87A00FFF078A9AC019291BDDB1D06A0786469743,
	U3CU3Ec__DisplayClass82_0__ctor_mF2D361277CA1F3D286FE94AE0316C6D2C540EECF,
	U3CU3Ec__DisplayClass82_0_U3CDeleteRecordU3Eb__0_mB67260B7D6DA7D411D01B501150C5A18EEDCD49D,
	U3CRecordFromCloudU3Ed__83__ctor_m0191D092C28B3C9940B15D3EC901821862F9C103,
	U3CRecordFromCloudU3Ed__83_MoveNext_m2562FA74FBE9C343203A55645DC0DED43F55576D,
	U3CRecordFromCloudU3Ed__83_SetStateMachine_mC3B88C981148707EC12F5ADEC0E1FE643F50D868,
	U3CU3Ec__DisplayClass86_0__ctor_mB5CFDC6FCA64B34523EC7A55769CE2C009AF954F,
	U3CU3Ec__DisplayClass86_0_U3COnASALogU3Eb__0_mEF4B9A8074B10FDFBE8E795090027D92B4AD218C,
	U3CU3Ec__DisplayClass87_0__ctor_mF97E389A9E3AAA06255EAB240BB5D08A0F9F572B,
	U3CU3Ec__DisplayClass87_0_U3COnASAErrorU3Eb__0_mD84EA2A48EE9371056FA4C0F7BC8BF4335866DAA,
	SpacePinASA_get_LocalPeg_m0F728B5C04E0845597B8B11E168156F1B20EFDEA,
	SpacePinASA_get_Publisher_m46A0FFBF75D1D244FC3DB6D878D75E08DA1C4500,
	SpacePinASA_set_Publisher_m3A91090D95536B6A677B6AEE0AB5E10D264740FC,
	SpacePinASA_get_SpacePinId_m8C3A45F246C36A73C253844A3549DDFA2B1EC87F,
	SpacePinASA_get_Properties_m27F408B0FD3D145724C1F8C1D95E069080B39963,
	SpacePinASA_Awake_m2C88E4D40633E6E6CDE046EC44444950BBD89710,
	SpacePinASA_get_IsReadyForPublish_mBD95537BA9DE2D396B56B01CDA1D06B04D431D90,
	SpacePinASA_SetLocalPeg_m29C3B631B667836F86B725BB7A7A6127E3F22C7E,
	SpacePinASA_ConfigureLocalPeg_mD101FCBD64C1F7616E3B4C232EAC721849D806FF,
	SpacePinASA__ctor_m1927AC56CFF49F1F60FEDC0C793BAD410AEBE42D,
	KeyValPair__ctor_m598C5527DFCEB0E34043DE871CD34498A711542B,
	U3CConfigureLocalPegU3Ed__20__ctor_mB0E218A94C164C1A69237CE24AAF41769F38326B,
	U3CConfigureLocalPegU3Ed__20_MoveNext_m0E4558FB4E82DEFEAF16523AB5907FBE6E677289,
	U3CConfigureLocalPegU3Ed__20_SetStateMachine_m1DEDABCE0B469F588B211D7A2407E1B129C037F6,
	SpacePinBinder_get_SpacePins_m1AF5AF6E659865F935C60824CB2ED014A73ED15D,
	SpacePinBinder_get_SearchRadius_mA3BAA0C01AB0C41D1CF79348E8B10126BCDED63C,
	SpacePinBinder_set_SearchRadius_m68E34D6F6AFEA7F83F8DA6F306A0E25FAF488B56,
	SpacePinBinder_get_Name_m731AFA512852D00DDBA8B76DCD21EAC43B13B338,
	SpacePinBinder_get_IsReady_m401CA2750DD153A9485AD34C331B4E51B1DB8097,
	SpacePinBinder_get_PublisherStatus_m45E91C43D966DA51E8B46E7E807C942D4BCA5BA6,
	SpacePinBinder_GetBindings_mCFF9B1714BBEA60F71A30218EB5E17B657C0C1C8,
	SpacePinBinder_CreateBinding_m8250050CC2754BCB1FBFFA78A6629F1034180125,
	SpacePinBinder_RemoveBinding_m17FC250E32BBD5BF5D71E25FFC402413278F6A56,
	SpacePinBinder_AddSpacePin_m5E4BD29D3303E232B20EC443B46D5CCEE061D72B,
	SpacePinBinder_RemoveSpacePin_mF33B98F8DDF9AB9A2DEF2691B4D3FCE7B5700801,
	SpacePinBinder_Publish_m87722513654FA6EA9C5BD2408DDF70A833317827,
	SpacePinBinder_Publish_mACDF39FF42951483AE9A5034EEBFCADF018D1A00,
	SpacePinBinder_Download_m92CBF37CD52B3B3799A24DDD522BCADA555A1F5C,
	SpacePinBinder_Search_m47C8350A31EC6C918D977BD2CA3717909C38F8E0,
	SpacePinBinder_Purge_m6ADF4BD850B156D5FB499A6FFB56DE5183342788,
	SpacePinBinder_Clear_m8E0FCB3336695953465F54039088933AD7E90DA7,
	SpacePinBinder_UnPin_mAD08C0D32E4C5692A93EBCE67EDFDAD6421E7E7D,
	SpacePinBinder_Awake_m43699AD46FA72C7D345B2C9EC0F72521439DBDA4,
	SpacePinBinder_DebugLogExtra_mC6DECC945BBF972279FEADF7CAF6612766DD81A8,
	SpacePinBinder_SetSpacePinsPublisher_m8E282AE2099B8F4A3B0D2A8A53C14C990E259A60,
	SpacePinBinder_IsReadyForPublish_m1AAF16D1BA6A86BB130FE16D578440C16BCCB4E9,
	SpacePinBinder_SetBinding_mF8CC9316A64A81C9E9DD0AF4390DB44990A81187,
	SpacePinBinder_ExtractForPublisher_m036AD1EFF8BC876BB4322458C9667AD402D38300,
	SpacePinBinder_FindSpacePinById_mDC4B1D3614DD03232014AE1A0FAC1664E7AC84B1,
	SpacePinBinder_FindSpacePin_m3E56179221D32BF0BC028EFA05CDE1C3D8E5DD65,
	SpacePinBinder_FindBindingByCloudAnchorId_m58EA8C2F994781F1F33DDC2D3C28E9332E9897FC,
	SpacePinBinder_FindBindingBySpacePinId_m21A18166D6961D56DEFA6A55BAA52134FF8D7793,
	NULL,
	SpacePinBinder__ctor_m8F40E9A1C6ABD68DF345C38E2113AC4AB2605119,
	SpacePinBinder__cctor_mD34D8A7510B0AAA35A31C84A6F0A80F4EE520B39,
	SpacePinPegAndProps__ctor_mB91CEE5DB746589B4C83F7A91421A39B4E8CBD26,
	U3CPublishU3Ed__24__ctor_mE06E96839326DB258449B725033075E9A6962581,
	U3CPublishU3Ed__24_MoveNext_m8CB46268093867E8577858AF69CE70C234C7DD08,
	U3CPublishU3Ed__24_SetStateMachine_m865160DD563906A0B8701093CE27779950A5EFA6,
	U3CPublishU3Ed__25__ctor_m0C2D46D2A47A98F0D5112B332D0F0D609CF6CB0F,
	U3CPublishU3Ed__25_MoveNext_m31EEC158C92C9DA58C340F2C4787E6735593AD7A,
	U3CPublishU3Ed__25_SetStateMachine_mDD80447B3563E954ECE3BD0B651EF68A2FAFDA2C,
	U3CDownloadU3Ed__26__ctor_m37464F764F2C2E4D685BDCAF1807544C51CA9F68,
	U3CDownloadU3Ed__26_MoveNext_m4D79C741AF704443A790CE6AA58FBB5C1EFDE8ED,
	U3CDownloadU3Ed__26_SetStateMachine_mB9FD2CF4C909E8CE4078DB04952E1EAA4F1F7315,
	U3CSearchU3Ed__27__ctor_mBACDEA2B7F51EB05807B4C9576F2952BA08293D3,
	U3CSearchU3Ed__27_MoveNext_mCC7DF67EBAA8534C8BE11CE4D1B964ED0CCCEECA,
	U3CSearchU3Ed__27_SetStateMachine_m1D361F16149F7EA4C1DA7FF7EF2AFA3AFE3C942B,
	U3CPurgeU3Ed__28__ctor_m054EBED0287A2203AF73381D81C9246C598C6DB4,
	U3CPurgeU3Ed__28_MoveNext_mF8BD0DCDC2DC172BA2B8BF1E59AAB0C1E2981136,
	U3CPurgeU3Ed__28_SetStateMachine_mDC3D399BE941985F04FEAA414BC4AA951ED7C3E9,
	U3CClearU3Ed__29__ctor_m0C9BE60F2268B1130F61D42FA7B36487791B0A4B,
	U3CClearU3Ed__29_MoveNext_m288D441AFBF53D89E0C41D19F16141BC2CAB26D8,
	U3CClearU3Ed__29_SetStateMachine_m4AA0583CDF48A6F2159B45B1086D5328875B06DE,
	U3CU3Ec__DisplayClass37_0__ctor_mBE2C9D398A22D997EF6CB39DDBDAB0E25ACDDCBA,
	U3CU3Ec__DisplayClass37_0_U3CFindSpacePinByIdU3Eb__0_m4245DA0E0152B393408556F362A84EB6B1C37787,
	U3CU3Ec__DisplayClass38_0__ctor_mAE1A5EC6A8AEA4B2362AFF24D9E1EE2B9A4DA951,
	U3CU3Ec__DisplayClass38_0_U3CFindSpacePinU3Eb__0_mA8164AC5E6205CD88B8D9549A4CC338977CD1EA2,
	U3CU3Ec__DisplayClass39_0__ctor_mD4835B8261BA9899D27CDD2FB352DF63FC34CFF1,
	U3CU3Ec__DisplayClass39_0_U3CFindBindingByCloudAnchorIdU3Eb__0_m5A4B925C1B18DB42A3CD6CCE4B540AD792E47BB8,
	U3CU3Ec__DisplayClass40_0__ctor_mE3AA5E165E154781680AF608DF4D4C782A807772,
	U3CU3Ec__DisplayClass40_0_U3CFindBindingBySpacePinIdU3Eb__0_mA26A9BCB2C39213CB34EBB64AC8C7122DD567EBE,
	NULL,
	NULL,
	SpacePinBinderFile_get_Name_mC7BCEE089D944610C8182BC820FCB289C7D33236,
	SpacePinBinderFile_Get_m6A674F0CBB3A15191531F678D3B2EC8D493C0981,
	SpacePinBinderFile_Put_m39427463ACA4E1F9C3EF959873C846F509BD96F1,
	SpacePinBinderFile_Save_mB344A6C1B84321A588DD6617682A543551185927,
	SpacePinBinderFile_Load_m30632FDEAF1AE5E68766F8C51BA927DCC50C0147,
	SpacePinBinderFile_GetFullPath_m289C1470AD607BFFAF410FB175BBB7611C86E085,
	SpacePinBinderFile__ctor_mB119DF53FF3F461D160641E01E042B7837D6EC7D,
};
static const int32_t s_InvokerIndices[249] = 
{
	6584,
	6466,
	6584,
	6584,
	1992,
	3886,
	6584,
	6584,
	6584,
	6584,
	6584,
	6584,
	3886,
	3886,
	6584,
	6466,
	6595,
	3054,
	6678,
	5383,
	1645,
	6584,
	2448,
	5421,
	4775,
	4775,
	4775,
	2447,
	4780,
	4780,
	4775,
	6466,
	5304,
	6466,
	5304,
	6466,
	5304,
	6466,
	5304,
	6584,
	6466,
	6584,
	5421,
	6584,
	5421,
	6629,
	5463,
	6629,
	5463,
	6629,
	5463,
	6466,
	6678,
	6584,
	2448,
	5421,
	4775,
	4775,
	4775,
	2447,
	4775,
	4780,
	4780,
	9623,
	4775,
	4780,
	4775,
	4780,
	4775,
	4775,
	4775,
	6584,
	6584,
	3886,
	6584,
	2448,
	2447,
	4775,
	4775,
	4775,
	3054,
	3054,
	3054,
	3054,
	6584,
	3851,
	3886,
	6678,
	6678,
	9783,
	6584,
	8977,
	6678,
	6584,
	6584,
	5421,
	6466,
	6595,
	6678,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	3886,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	3886,
	6678,
	6678,
	5421,
	6678,
	3886,
	6678,
	3886,
	6678,
	6678,
	5421,
	6678,
	6678,
	6678,
	6678,
	6584,
	6584,
	5421,
	6584,
	6584,
	6678,
	6466,
	5421,
	6678,
	6678,
	6678,
	6678,
	6678,
	5421,
	6584,
	6629,
	5463,
	6584,
	6466,
	6584,
	6584,
	1992,
	3886,
	3886,
	3886,
	6584,
	4775,
	6584,
	6584,
	6584,
	6584,
	6678,
	6678,
	9623,
	5421,
	3886,
	3054,
	4775,
	4482,
	4482,
	4482,
	4482,
	-1,
	6678,
	9783,
	6678,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	6678,
	5421,
	6678,
	3886,
	6678,
	3886,
	6678,
	3932,
	6678,
	3932,
	-1,
	-1,
	6584,
	3886,
	3886,
	3886,
	3886,
	6584,
	6678,
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x02000035, { 6, 1 } },
	{ 0x060000D3, { 0, 6 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[7] = 
{
	{ (Il2CppRGCTXDataType)2, 1496 },
	{ (Il2CppRGCTXDataType)3, 296 },
	{ (Il2CppRGCTXDataType)3, 297 },
	{ (Il2CppRGCTXDataType)2, 11145 },
	{ (Il2CppRGCTXDataType)3, 48552 },
	{ (Il2CppRGCTXDataType)3, 38130 },
	{ (Il2CppRGCTXDataType)3, 48557 },
};
extern const CustomAttributesCacheGenerator g_Microsoft_MixedReality_WorldLocking_ASA_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Microsoft_MixedReality_WorldLocking_ASA_CodeGenModule;
const Il2CppCodeGenModule g_Microsoft_MixedReality_WorldLocking_ASA_CodeGenModule = 
{
	"Microsoft.MixedReality.WorldLocking.ASA.dll",
	249,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	2,
	s_rgctxIndices,
	7,
	s_rgctxValues,
	NULL,
	g_Microsoft_MixedReality_WorldLocking_ASA_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
