cmd_net/ipv4/netfilter/nf_nat_pptp.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/ipv4/netfilter/nf_nat_pptp.ko net/ipv4/netfilter/nf_nat_pptp.o net/ipv4/netfilter/nf_nat_pptp.mod.o;  true
