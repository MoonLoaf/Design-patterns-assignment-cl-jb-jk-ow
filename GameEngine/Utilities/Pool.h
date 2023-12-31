#pragma once
#include <memory>
#include <queue>
#include "GameObject.h"

class Image;

class Pool {
public:
    Pool(std::shared_ptr<Image> image, int poolSize);
    int currentActiveObjects;
    std::shared_ptr<GameObject> PoolGetObject();
    void PoolReturnObject(std::shared_ptr<GameObject> gameObject);
    std::queue<std::shared_ptr<GameObject>> ObjectPool;
};
