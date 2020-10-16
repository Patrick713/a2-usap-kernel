#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x91ae6be7, "xt_unregister_targets" },
	{ 0x343c048e, "xt_register_targets" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9fcfa3e, "ipv6_skip_exthdr" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x53f8a723, "nf_route" },
	{ 0x5f754e5a, "memset" },
	{ 0x99bb8806, "memmove" },
	{ 0xeab3fd69, "skb_put" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xd5e9140, "inet_proto_csum_replace4" },
	{ 0x76c4b4a2, "skb_ensure_writable" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "A7D727BC28D99608B33F6BC");