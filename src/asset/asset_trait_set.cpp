#include "asset/asset_trait_set.hpp"

#include <set>

#include "asset/asset_trait.hpp"

AssetTraitSet::AssetTraitSet(const std::set<AssetTrait>& traits) noexcept {
  for (const auto& trait : traits) {
    traits_.insert(std::make_pair(trait.GetName(), trait));
  }
}