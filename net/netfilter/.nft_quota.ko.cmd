cmd_net/netfilter/nft_quota.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/nft_quota.ko net/netfilter/nft_quota.o net/netfilter/nft_quota.mod.o;  true
