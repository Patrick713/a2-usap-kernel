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
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xda6c2db5, "register_pernet_device" },
	{ 0x9b182b2, "sockfd_lookup" },
	{ 0x8ef81ae8, "udp6_set_csum" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x639acd78, "sock_release" },
	{ 0xb545fc7c, "dst_release" },
	{ 0x2b5ab97d, "_raw_spin_lock_bh" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
	{ 0x59eb8df1, "sock_create_kern" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe5bad599, "inet6_csk_xmit" },
	{ 0xe2b5e146, "refcount_inc_not_zero_checked" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x622aa648, "udp_sock_create6" },
	{ 0xc6acf89d, "setup_udp_tunnel_sock" },
	{ 0x3bdc1db7, "__pskb_pull_tail" },
	{ 0x5f754e5a, "memset" },
	{ 0xfcbf105c, "kernel_connect" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x71c90087, "memcmp" },
	{ 0xfcf7a3d, "unregister_pernet_device" },
	{ 0x61cfa655, "__ip_queue_xmit" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x101cdb2, "kernel_sock_shutdown" },
	{ 0xecd247a4, "sk_free" },
	{ 0xc1e58a5f, "refcount_dec_and_test_checked" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa92173df, "fput" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xac6659eb, "skb_queue_tail" },
	{ 0x8f3625fe, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xa748a031, "pskb_expand_head" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xdb9ca3c5, "_raw_spin_lock" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x1738c19e, "_raw_write_unlock_bh" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x77f6c690, "_raw_read_lock_bh" },
	{ 0x9acb8066, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6e4ac99c, "udp_set_csum" },
	{ 0x5388bfe1, "kernel_bind" },
	{ 0xefb7bccf, "_raw_write_lock_bh" },
	{ 0x4ac49f05, "skb_dequeue" },
	{ 0x633882d7, "udp_sock_create4" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x1ee8d6d4, "refcount_inc_checked" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "ipv6,ip6_udp_tunnel,udp_tunnel");


MODULE_INFO(srcversion, "30C1B90993BD3EF29F6894D");
