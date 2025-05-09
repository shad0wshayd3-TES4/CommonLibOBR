#pragma once

namespace RE
{
	enum class PACKAGE_PROCEDURE_TYPE : std::int32_t
	{
		kNone = -1,
		kExploreTravel,
		kExploreWander,
		kExploreActivate,
		kExploreAquire,
		kSleep,
		kEat,
		kFollowWithEscort,
		kFollowWithoutEscort,
		kEscortActor,
		kEscortObject,
		kDialogue,
		kAlarm,
		kCombat,
		kActivate,
		kGreet,
		kObserveCombat,
		kObserveDialogue,
		kTalkToDead,
		kCombatNotInHigh,
		kFlee,
		kTrespass,
		kGetUp,
		kExploreNpc,
		kMountHorse,
		kDismountHorse,
		kDoNothing,
		kExploreAquireGeneric,
		kCastTargetSpell,
		kCastTouchSpell,
		kAccompany,
		kUseItemAt,
		kFeed,
		kAmbush,
		kSurface,
		kCasting,
		kFleeNonCombat,
		kSearch,
		kClearMountPosition,
		kSummonCreatureDefend,
		kMovementBlocked,
	};
}
