cmd_net/netfilter/nft_reject.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/nft_reject.ko net/netfilter/nft_reject.o net/netfilter/nft_reject.mod.o;  true
